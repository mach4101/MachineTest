#include <iostream>
using namespace std;

const int N = 25;
long long map[N][N];
long long dp[N][N];
int direction[8][2] = {{1, 2}, {1, -2}, {-1, 2}, {-1, -2}, {2, 1}, {2, -1}, {-2, 1}, {-2, -1}};

int main() {
    int n, m, obx, oby;
    cin >> n >> m >> obx >> oby;

    map[obx][oby] = 1;

    for (int i = 0; i < 8; ++i) {
        int dx = obx + direction[i][0];
        int dy = oby + direction[i][1];

        if (dx >= 0 && dx <= n && dy >= 0 && dy <= m) {
            map[dx][dy] = 1;
        }
    }

    for (int i = 0; i <= m; ++i) {
        if (map[0][i] == 0)
            dp[0][i] = 1;
        else
            break;
    }

    for (int i = 0; i <= n; ++i) {
        if (map[i][0] == 0)
            dp[i][0] = 1;
        else
            break;
    }

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (map[i][j] != 1) {
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
            }
        }
    }

    cout << dp[n][m] << endl;

    return 0;
}