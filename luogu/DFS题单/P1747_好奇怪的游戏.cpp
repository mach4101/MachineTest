#include <cstring>
#include <iostream>
#include <queue>
#include <utility>
using namespace std;

int step[12][2] = {
    {1, 2},
    {1, -2},
    {-1, 2},
    {-1, -2},
    {2, 1},
    {2, -1},
    {-2, 1},
    {-2, -1},
    {2, 2},
    {2, -2},
    {-2, 2},
    {-2, -2}};

int map[22][22];

int main() {
    int x1, y1;

    for (int i = 0; i < 2; ++i) {
        cin >> x1 >> y1;
        memset(map, 0, sizeof(map));
        queue<pair<int, int> > que;
        que.push({x1, y1});

        while (que.size()) {
            pair<int, int> tmp = que.front();
            que.pop();

            for (int i = 0; i < 12; ++i) {
                int tx = tmp.first + step[i][0];
                int ty = tmp.second + step[i][1];

                if (tx >= 1 && tx <= 20 && ty >= 1 && ty <= 20 && map[tx][ty] == 0) {
                    map[tx][ty] = map[tmp.first][tmp.second] + 1;
                    que.push({tx, ty});
                }
            }
        }

        cout << map[1][1] << endl;
    }

    return 0;
}