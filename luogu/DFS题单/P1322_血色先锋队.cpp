// 多起点BFS问题
#include <cstring>
#include <iostream>
#include <queue>
#include <utility>
using namespace std;

// 's' 表示传染源，‘l’表示领主
char map[505][505];
bool vis[505][505];
int dist[505][505];
int direction[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

struct info {
    int x, y, time;
    info(int a, int b, int c)
        : x(a), y(b), time(c) {}
};

int main() {
    queue<pair<int, int>> que;
    queue<info> source;
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    for (int i = 0; i < a; ++i) {
        int x, y;
        cin >> x >> y;
        source.push(info(x, y, 0));
        vis[x][y] = true;
        dist[x][y] = 0;
    }

    // 领主
    for (int i = 0; i < b; ++i) {
        int x, y;
        cin >> x >> y;
        que.push({x, y});
    }

    while (source.size()) {
        info tmp = source.front();
        source.pop();

        dist[tmp.x][tmp.y] = tmp.time;

        for (int i = 0; i < 4; ++i) {
            int dx = direction[i][0] + tmp.x;
            int dy = direction[i][1] + tmp.y;

            if (dx >= 1 && dx <= n && dy >= 1 && dy <= m && !vis[dx][dy]) {
                source.push(info(dx, dy, tmp.time + 1));
                vis[dx][dy] = true;
            }
        }
    }

    while (que.size()) {
        pair<int, int> tmp = que.front();
        que.pop();

        cout << dist[tmp.first][tmp.second] << endl;
    }

    return 0;
}