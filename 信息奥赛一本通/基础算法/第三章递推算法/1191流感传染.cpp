// 流感传染
#include <iostream>
#include <queue>
using namespace std;

const int N = 110;
char map[N][N];
int direction[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
bool vis[N][N];
struct info {
    int x, y, day;
    info(int a, int b, int c)
        : x(a), y(b), day(c) {}
};

int main() {
    int n;
    cin >> n;
    queue<info> que;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> map[i][j];
            if (map[i][j] == '@') {
                que.push(info(i, j, 1));
                vis[i][j] = true;
            }
        }
    }
    int m;
    cin >> m;
    int count = 0;

    while (que.size()) {
        info q = que.front();
        que.pop();

        if (q.day <= m)
            count++;

        for (int i = 0; i < 4; ++i) {
            int dx = q.x + direction[i][0];
            int dy = q.y + direction[i][1];

            if (1 <= dx && dx <= n && 1 <= dy && dy <= n && map[dx][dy] == '.' && !vis[dx][dy]) {
                que.push(info(dx, dy, q.day + 1));
                vis[dx][dy] = true;
            }
        }
    }

    cout << count << endl;

    return 0;
}