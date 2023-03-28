// 岛屿数量
#include <iostream>
using namespace std;

char map[350][350];
int direction[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
bool vis[350][350];
int n, m;

void dfs(int i, int j) {
    vis[i][j] = true;

    for (int k = 0; k < 4; ++k) {
        int dx = i + direction[k][0];
        int dy = j + direction[k][1];

        if (1 <= dx && dx <= n && 1 <= dy && dy <= m && map[dx][dy] == '1' && !vis[dx][dy]) {
            dfs(dx, dy);
        }
    }
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cin >> map[i][j];
        }
    }

    // 求联通块的数量
    int cnt = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (map[i][j] == '1' && !vis[i][j]) {
                dfs(i, j);
                cnt++;
            }
        }
    }

    cout << cnt << endl;

    return 0;
}