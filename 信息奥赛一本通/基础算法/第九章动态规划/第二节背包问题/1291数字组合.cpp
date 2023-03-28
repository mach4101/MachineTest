// 数字组合
#include <iostream>
using namespace std;

const int N = 25, M = 1100;
int dp[N][M];
int a[N];

int main() {
    int n, t;
    cin >> n >> t;

    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    for (int i = 0; i <= n; ++i) {
        dp[i][0] = 1;
    }

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= t; ++j) {
            if (j >= a[i])
                dp[i][j] = dp[i - 1][j] + dp[i - 1][j - a[i]];
            else
                dp[i][j] = dp[i - 1][j];
        }
    }

    cout << dp[n][t] << endl;

    return 0;
}