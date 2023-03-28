#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <utility>
using namespace std;

int direction[8][2] = {
    {1, -2},
    {1, 2},
    {-1, 2},
    {-1, -2},
    {2, 1},
    {2, -1},
    {-2, 1},
    {-2, -1}};

int map[405][405];

int main() {
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    memset(map, -1, sizeof(map));
    queue<pair<int, int> > que;
    que.push({x, y});
    map[x][y] = 0;

    while (que.size()) {
        pair<int, int> tmp = que.front();
        que.pop();

        for (int i = 0; i < 8; ++i) {
            int tx = direction[i][0] + tmp.first;
            int ty = direction[i][1] + tmp.second;

            if (map[tx][ty] == -1 && tx > 0 && tx <= n && ty > 0 && ty <= m) {
                map[tx][ty] = map[tmp.first][tmp.second] + 1;
                que.push({tx, ty});
            }
        }
    }

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            printf("%-5d", map[i][j]);
        }
        cout << endl;
    }

    return 0;
}