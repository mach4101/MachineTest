// 最小邮票数

#include <iostream>
using namespace std;

const int N = 1010;
int arr[N];
int dp[N][N];

int main() {
    int n, m;
    while (cin >> m >> n) {
        for (int i = 1; i <= n; ++i) {
            cin >> arr[i];
        }

        // dp[i][j] 表示从前i个邮票中选总和为j的最小邮票数

        for (int i = 0; i <= n; ++i) {
            for (int j = 0; j <= m; ++j) {
                dp[i][j] = 1e9;
            }
        }

        dp[0][0] = 0;

        for (int i = 1; i <= n; ++i) {
            for (int j = 0; j <= m; ++j) {
                if (j >= arr[i])
                    dp[i][j] = min(dp[i - 1][j], dp[i - 1][j - arr[i]] + 1);
                else
                    dp[i][j] = dp[i - 1][j];
            }
        }
        if (dp[n][m] > 1e8)
            cout << 0 << endl;
        else
            cout << dp[n][m] << endl;
    }

    return 0;
}