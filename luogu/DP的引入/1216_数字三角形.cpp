// 数字三角形

#include <cstring>
#include <iostream>
using namespace std;

const int N = 1005;
int a[N][N];
int dp[N][N];

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            cin >> a[i][j];
        }
    }

    memset(dp, -1, sizeof dp);

    dp[1][1] = a[1][1];

    for (int i = 2; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + a[i][j];
        }
    }

    int res = 0;
    for (int i = 1; i <= n; ++i) {
        res = max(res, dp[n][i]);
    }
    cout << res << endl;

    return 0;
}