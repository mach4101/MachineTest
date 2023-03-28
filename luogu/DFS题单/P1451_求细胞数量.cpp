#include <iostream>
#include <string>
using namespace std;

bool vis[105][105];
char map[105][105];
int direction[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
int n, m;
// 每跑一次就能识别出一个连痛块
void dfs(int x, int y) {
    vis[x][y] = true;

    for (int i = 0; i < 4; ++i) {
        int dx = x + direction[i][0];
        int dy = y + direction[i][1];
        if (!vis[dx][dy] && map[dx][dy] != '0' && dx >= 0 && dx < n && dy >= 0 && dy < m) {
            dfs(dx, dy);
        }
    }
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> map[i][j];
        }
    }

    // 求联通块的数量
    int count = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (!vis[i][j] && map[i][j] != '0') {
                dfs(i, j);
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}