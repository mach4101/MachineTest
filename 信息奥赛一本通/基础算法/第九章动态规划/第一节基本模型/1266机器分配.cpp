// 机器分配

#include <iostream>
using namespace std;

int map[20][20];

int dp[20][20];
// dp[i][j]表示为i个公司，分配j台设备的盈利
// dp[i][j] = max(dp[i][j], dp[i - 1][j - k] + map[i][k])

int vis[20][20];
// vis[i][j]表示第i个公司，在面对j台机器的时候，选择了k台

void print(int n, int m) {
    if (n == 0)
        return;
    print(n - 1, m - vis[n][m]);
    cout << n << " " << vis[n][m] << endl;
}

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cin >> map[i][j];
        }
    }

    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j <= m; ++j) {
            for (int k = 0; k <= j; ++k) {
                if (dp[i][j] <= dp[i - 1][j - k] + map[i][k]) {
                    dp[i][j] = dp[i - 1][j - k] + map[i][k];
                    vis[i][j] = k;
                }
            }
        }
    }

    cout << dp[n][m] << endl;
    print(n, m);
    return 0;
}