#include <cstring>
#include <iostream>
#include <queue>
#include <utility>

using namespace std;

string map[1005];
int step[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
int dist[1005][1005];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> map[i];
    }

    memset(dist, -1, sizeof dist);

    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    queue<pair<int, int>> que;
    que.push({x1 - 1, y1 - 1});
    dist[x1 - 1][y1 - 1] = 0;

    while (que.size()) {
        pair<int, int> tmp = que.front();
        que.pop();

        if (tmp.first == x2 - 1 && tmp.second == y2 - 1) {
            cout << dist[tmp.first][tmp.second] << endl;
            return 0;
        }

        for (int i = 0; i < 4; ++i) {
            int tx = tmp.first + step[i][0];
            int ty = tmp.second + step[i][1];

            if (tx >= 0 && tx < n && ty >= 0 && ty < n && map[tx][ty] == '0' && dist[tx][ty] == -1) {
                dist[tx][ty] = dist[tmp.first][tmp.second] + 1;
                que.push({tx, ty});
            }
        }
    }

    return 0;
}