// 最短距离编辑
#include <cstring>
#include <iostream>
#include <string>
using namespace std;

const int N = 1005;
char strA[N], strB[N];
int dp[N][N];

int main() {
    int n, m;
    cin >> n;
    cin >> strA + 1;
    cin >> m;
    cin >> strB + 1;

    // dp[i][j]表示把序列1的前i个字符转变成序列2的前j个字符的最小操作方式
    // 如果添加一个字符后相等，则dp[i][j] = dp[i - 1][j] + 1
    // 如果删除一个字符后相等，则d[i][j] = dp[i][j - 1] + 1
    // 如果变换一个字符后相等，则dp[i][j] = dp[i - 1][j - 1] + 1
    // 如果已经相等，则dp[i][j] = dp[i - 1][j - 1]
    memset(dp, 1e9, sizeof dp);
    for (int i = 0; i <= n; ++i) {
        dp[i][0] = i;
    }

    for (int i = 0; i <= m; ++i) {
        dp[0][i] = i;
    }

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (strA[i] == strB[j])
                dp[i][j] = dp[i - 1][j - 1];
            else {
                dp[i][j] = min(dp[i - 1][j] + 1, min(dp[i][j - 1] + 1, dp[i - 1][j - 1] + 1));
            }
        }
    }

    cout << dp[n][m] << endl;

    return 0;
}