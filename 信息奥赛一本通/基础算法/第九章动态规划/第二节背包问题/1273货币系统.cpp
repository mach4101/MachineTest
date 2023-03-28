// 货币系统
#include <iostream>
using namespace std;

const int N = 1001;
int coin[N];

long long dp[N][15000];
// dp[i][j]表示前i个硬币组成j的方案数
// dp[i][j] = dp[i - 1][j - k * coin[i]] + dp[i - 1][j]

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; ++i) {
        cin >> coin[i];
    }

    for (int i = 0; i <= n; ++i) {
        dp[i][0] = 1;
    }

    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j <= m; ++j) {
            if (j >= coin[i]) {
                dp[i][j] = dp[i - 1][j] + dp[i][j - coin[i]];
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    cout << dp[n][m] << endl;

    return 0;
}