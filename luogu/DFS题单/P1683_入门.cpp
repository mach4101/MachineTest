// 最短路径的最长距离

#include <iostream>
#include <queue>
#include <utility>
using namespace std;

int vis[25][25];
char map[25][25];
int direction[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
int m, n;

int bfs(int x, int y) {
    vis[x][y] = true;
    queue<pair<int, int>> que;
    que.push({x, y});

    int ans = 0;
    while (que.size()) {
        pair<int, int> tmp = que.front();
        que.pop();

        ans++;

        for (int i = 0; i < 4; ++i) {
            int dx = tmp.first + direction[i][0];
            int dy = tmp.second + direction[i][1];

            if (dx >= 0 && dx < n && dy >= 0 && dy < m && map[dx][dy] != '#' && !vis[dx][dy]) {
                vis[dx][dy] = true;
                que.push({dx, dy});
            }
        }
    }

    return ans;
}

int main() {
    int start_i, start_j;

    cin >> m >> n;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> map[i][j];
            if (map[i][j] == '@') {
                start_i = i;
                start_j = j;
            }
        }
    }

    cout << bfs(start_i, start_j) << endl;
    return 0;
}