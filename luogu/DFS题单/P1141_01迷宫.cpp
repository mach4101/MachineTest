#include <cstring>
#include <iostream>
#include <queue>
#include <utility>
using namespace std;

int n, m;
char map[1100][1100];
bool vis[1100][1100];
int direction[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

// 从x，y开始，最多能走多少步
int bfs(int x, int y) {
    int ans = 1;
    memset(vis, false, sizeof vis);
    queue<pair<int, int>> que;

    que.push({x, y});
    vis[x][y] = true;
    while (que.size()) {
        pair<int, int> tmp = que.front();
        que.pop();

        for (int i = 0; i < 4; ++i) {
            int dx = tmp.first + direction[i][0];
            int dy = tmp.second + direction[i][1];

            if (!vis[dx][dy] && map[dx][dy] != map[tmp.first][tmp.second] && dx >= 1 && dx <= n && dy >= 1 && dy <= n) {
                que.push({dx, dy});
                vis[dx][dy] = true;
                ans++;
            }
        }
    }

    return ans;
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> map[i][j];
        }
    }

    while (m--) {
        int x, y;
        cin >> x >> y;
        cout << bfs(x, y) << endl;
    }
    return 0;
}