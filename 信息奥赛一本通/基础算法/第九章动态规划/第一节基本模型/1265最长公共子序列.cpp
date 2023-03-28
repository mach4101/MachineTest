// 1265 最长公共子序列

#include <cstring>
#include <iostream>

using namespace std;

const int N = 1100;
int dp[N][N];
char str1[N], str2[N];
int main() {
    scanf("%s%s", str1 + 1, str2 + 1);
    int len1 = strlen(str1 + 1);
    int len2 = strlen(str2 + 1);

    for (int i = 1; i <= len1; ++i) {
        for (int j = 1; j <= len2; ++j) {
            dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            if (str1[i] == str2[j]) {
                dp[i][j] = max(dp[i][j], dp[i - 1][j - 1] + 1);
            }
        }
    }

    cout << dp[len1][len2] << endl;
    return 0;
}