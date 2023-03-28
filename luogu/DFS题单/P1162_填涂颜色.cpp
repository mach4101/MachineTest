// 思路:将矩形向外扩展一圈，外圈全零，然后将所有的零变成2，再将圈外的2变成零
#include <iostream>
#include <queue>

using namespace std;

int map[35][35];
int n;
// 暴力做法无法pass最后一个点
// bool have_left_1(int x, int y) {
//     for (int i = 1; i <= y; ++i) {
//         if (a[x][i] == 1)
//             return true;
//     }
//     return false;
// }

// bool have_right_1(int x, int y) {
//     for (int i = y; i <= n; ++i) {
//         if (a[x][i] == 1)
//             return true;
//     }
//     return false;
// }

// bool have_up_1(int x, int y) {
//     for (int i = 1; i <= x; ++i) {
//         if (a[i][y] == 1)
//             return true;
//     }
//     return false;
// }

// bool have_down_1(int x, int y) {
//     for (int i = x; i <= n; ++i) {
//         if (a[i][y] == 1)
//             return true;
//     }
//     return false;
// }

// int main() {
//     cin >> n;
//     for (int i = 1; i <= n; ++i) {
//         for (int j = 1; j <= n; ++j) {
//             cin >> a[i][j];
//         }
//     }

//     for (int i = 1; i <= n; ++i) {
//         for (int j = 1; j <= n; ++j) {
//             if (a[i][j] == 0 && have_left_1(i, j) && have_right_1(i, j) && have_up_1(i, j) && have_down_1(i, j)) {
//                 a[i][j] = 2;
//             }
//         }
//     }

//     for (int i = 1; i <= n; ++i) {
//         for (int j = 1; j <= n; ++j) {
//             cout << a[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

int direction[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
bool vis[35][35];

void dfs(int x, int y) {
    if (map[x][y] == 2)
        map[x][y] = 0;

    for (int i = 0; i < 4; ++i) {
        int dx = x + direction[i][0];
        int dy = y + direction[i][1];

        // 向周围开始染色，遇到1的时候就跳过去
        if (dx >= 0 && dx <= n + 1 && dy >= 0 && dy <= n + 1 && !vis[dx][dy] && map[dx][dy] != 1) {
            vis[dx][dy] = true;
            dfs(dx, dy);
        }
    }
}

int main() {
    cin >> n;
    for (int i = 0; i <= n + 1; ++i) {
        for (int j = 0; j <= n + 1; ++j) {
            if (i == 0 || j == 0 || i == n + 1 || j == n + 1) {  // 外圈圈零与零变二结合写了
                map[i][j] = 2;
            } else {
                int tmp;
                cin >> tmp;
                if (tmp == 0)
                    map[i][j] = 2;  // 零变二
                else
                    map[i][j] = 1;
            }
        }
    }

    // 从零零点开始染色
    vis[0][0] = true;
    dfs(0, 0);

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cout << map[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}