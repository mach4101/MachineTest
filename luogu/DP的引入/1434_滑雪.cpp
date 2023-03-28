// 化学

#include <cstring>
#include <iostream>

using namespace std;
int map[105][105];
int dp[105][105];

int direction[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
int n, m;

int dfs(int x, int y) {
    if (dp[x][y])
        return dp[x][y];  // 如果已经搜过，直接返回
    dp[x][y] = 1;

    for (int i = 0; i < 4; ++i) {
        int dx = x + direction[i][0];
        int dy = y + direction[i][1];

        if (dx >= 1 && dx <= n && dy >= 1 && dy <= m && map[x][y] > map[dx][dy]) {
            dp[x][y] = max(dfs(dx, dy) + 1, dp[x][y]);
        }
    }

    return dp[x][y];
}

int main() {
    cin >> n >> m;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cin >> map[i][j];
            dp[i][j] = 0;
        }
    }

    int ans = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            ans = max(ans, dfs(i, j));
        }
    }
    cout << ans << endl;

    return 0;
}