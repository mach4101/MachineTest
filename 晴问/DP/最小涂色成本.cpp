// 最小涂色成本

#include <cstring>
#include <iostream>
using namespace std;

const int N = 1e4 + 5;
int a[N], b[N], c[N];

// dp[i]表示把第i张白纸涂满所需要的成本
int dp[N][3];

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        cin >> a[i] >> b[i] >> c[i];
    }

    // dp[i][j]表示第i张纸涂j颜色的最小成本
    dp[1][0] = a[1];
    dp[1][1] = b[1];
    dp[1][2] = c[1];

    for (int i = 2; i <= n; ++i) {
        dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]) + a[i];
        dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]) + b[i];
        dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]) + c[i];
    }

    cout << min(dp[n][0], min(dp[n][1], dp[n][2])) << endl;

    return 0;
}