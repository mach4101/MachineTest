#include <cstring>
#include <iostream>
#include <queue>
#include <utility>
using namespace std;

char map[2005][2005];
int n, m;
int start_x, start_y;
int end_x, end_y;
bool vis[2005][2005];
int direction[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

struct info {
    int x, y, step;
    info(int a, int b, int c)
        : x(a), y(b), step(c) {}
};

int bfs(int x, int y) {
    queue<info> que;
    vis[x][y] = true;
    que.push(info(x, y, 0));

    while (que.size()) {
        info tmp = que.front();
        que.pop();

        if (tmp.x == end_x && tmp.y == end_y) {
            return tmp.step;
        }

        for (int i = 0; i < 4; ++i) {
            int dx = direction[i][0] + tmp.x;
            int dy = direction[i][1] + tmp.y;

            if (dx >= 0 && dx < n && dy >= 0 && dy < m && map[dx][dy] != '#' && !vis[dx][dy]) {
                que.push(info(dx, dy, tmp.step + 1));
                vis[dx][dy] = true;
            }
        }
    }
    return -1;
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> map[i][j];
            if (map[i][j] == 'd') {
                end_x = i;
                end_y = j;
            } else if (map[i][j] == 'm') {
                start_x = i;
                start_y = j;
            }
        }
    }

    vis[start_x][start_y] = true;
    // dfs(start_x, start_y, 0);

    int ans = bfs(start_x, start_y);

    if (ans == -1) {
        cout << "No Way!" << endl;
    } else {
        cout << ans << endl;
    }
    return 0;
}