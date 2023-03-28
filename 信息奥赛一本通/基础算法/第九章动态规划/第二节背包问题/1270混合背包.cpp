// 混合背包
#include <iostream>
using namespace std;

const int N = 250;
int dp[N][N];
int w[N], c[N], p[N];  // 分别是重量，价值以及次数

int main() {
    int m, n;
    cin >> m >> n;

    for (int i = 1; i <= n; ++i) {
        cin >> w[i] >> c[i] >> p[i];
    }

    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j <= m; ++j) {
            if (p[i] == 0) {  // 完全背包
                for (int k = 0; k * w[i] <= j; ++k) {
                    dp[i][j] = max(dp[i][j], dp[i - 1][j - k * w[i]] + k * c[i]);
                }
            } else {  // 多重背包
                for (int k = 0; k <= p[i]; ++k) {
                    if (k * w[i] <= j) {
                        dp[i][j] = max(dp[i][j], dp[i - 1][j - k * w[i]] + k * c[i]);
                    }
                }
            }
        }
    }

    cout << dp[n][m] << endl;

    return 0;
}