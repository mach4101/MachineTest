// 周长没有求好
#include <cstring>
#include <iostream>
#include <queue>

using namespace std;

char map[1005][1005];
int n;
int direction[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

bool vis[1005][1005];

int num;
queue<pair<int, int>> tmp;

void dfs(int x, int y) {
    vis[x][y] = true;
    num++;
    tmp.push({x, y});

    for (int i = 0; i < 4; ++i) {
        int dx = direction[i][0] + x;
        int dy = direction[i][1] + y;

        if (0 <= dx && dx < n && 0 <= dy && dy < n && !vis[dx][dy] && map[dx][dy] == '#') {
            dfs(dx, dy);
        }
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> map[i][j];
        }
    }

    int area = 0, around = 0;     // area表示面积，around表示周长
    queue<pair<int, int>> sharp;  // 存储结果的井号

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (!vis[i][j] && map[i][j] == '#') {
                dfs(i, j);
                if (num > area) {
                    area = num;
                    sharp = tmp;
                }
            }

            while (tmp.size())
                tmp.pop();
            num = 0;
        }
    }

    memset(vis, false, sizeof vis);

    while (sharp.size()) {
        pair<int, int> p = sharp.front();
        sharp.pop();
        // cout << p.first << " " << p.second << endl;
        for (int i = 0; i < 4; ++i) {
            int dx = direction[i][0] + p.first;
            int dy = direction[i][1] + p.second;

            if (0 <= dx && dx < n && 0 <= dy && dy < n && !vis[dx][dy] && map[dx][dy] == '.') {
                cout << around << endl;
                around++;
                vis[dx][dy] = true;
            }
        }
    }

    cout << area << " " << around << endl;

    return 0;
}