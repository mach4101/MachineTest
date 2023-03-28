// 采药
#include <iostream>
using namespace std;

const int N = 1100;
int dp[N][N];
int value[N], spend[N];

int main() {
    int m, n;
    cin >> m >> n;

    for (int i = 1; i <= n; ++i) {
        cin >> spend[i] >> value[i];
    }

    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j <= m; ++j) {
            if (spend[i] <= j) {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - spend[i]] + value[i]);
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    cout << dp[n][m] << endl;
    return 0;
}