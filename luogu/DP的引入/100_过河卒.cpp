#include <cstring>
#include <iostream>
using namespace std;

const int N = 30;
int map[N][N];
long long dp[N][N];
int direction[8][2] = {{2, 1}, {2, -1}, {-2, 1}, {-2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}};

int main() {
    //
    int x, y, n, m;
    cin >> n >> m >> x >> y;

    map[x][y] = 1;

    for (int i = 0; i < 8; ++i) {
        // 马的坐标
        int dx = direction[i][0] + x;
        int dy = direction[i][1] + y;
        if (dx >= 0 && dx <= n && dy >= 0 && dy <= m)
            map[dx][dy] = 1;
    }

    // 初始化第一行与第一列，因为这俩列只有一种走法，作为边界条件
    dp[0][0] = 1;
    for (int i = 1; i <= n; ++i) {
        if (map[i][0] == 0)
            dp[i][0] = 1;
        else  // 后面走不过去，都是零
            break;
    }

    for (int i = 1; i <= m; ++i) {
        if (map[0][i] == 0)
            dp[0][i] = 1;
        else  // 同上
            break;
    }

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (map[i][j] == 0)  // 如果可以走
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
        }
    }

    cout << dp[n][m] << endl;

    return 0;
}