// 多重背包

#include <iostream>
using namespace std;

int v[105];
int w[105];
int s[105];
int dp[105][105];

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; ++i) {
        cin >> v[i] >> w[i] >> s[i];
    }

    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j <= m; ++j) {
            for (int k = 0; k <= s[i]; ++k) {
                if (j >= k * v[i])
                    dp[i][j] = max(dp[i][j], dp[i - 1][j - k * v[i]] + k * w[i]);
            }
        }
    }

    cout << dp[n][m] << endl;

    return 0;
}