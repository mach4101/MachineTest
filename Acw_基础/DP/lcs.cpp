// 最长公共子序列

#include <cstdio>
#include <iostream>
using namespace std;

const int N = 1005;

// dp[i][j]表示第一个字符串的前i个字符和第二个字符串的前j个字符最长的公共子序列长度
int dp[N][N];
int main() {
    int n, m;
    char str1[N], str2[N];
    cin >> n >> m;
    scanf("%s%s", str1 + 1, str2 + 1);

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            if (str1[i] == str2[j])
                dp[i][j] = max(dp[i][j], dp[i - 1][j - 1] + 1);
        }
    }
    cout << dp[n][m] << endl;

    return 0;
}