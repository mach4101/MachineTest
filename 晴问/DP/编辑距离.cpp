// 编辑距离

#include <cstring>
#include <iostream>

using namespace std;

const int N = 105;

char str1[N], str2[N];
int dp[N][N];  // dp[i][j]表示从stri到str2j的最小距离

int main() {
    scanf("%s%s", str1 + 1, str2 + 1);

    int len1 = strlen(str1 + 1);
    int len2 = strlen(str2 + 1);

    // 求最大值，初始化dp
    for (int i = 0; i <= len1; ++i) {
        for (int j = 0; j <= len1; ++j)
            dp[i][j] = 1e9;
    }

    // 初始化边界条件
    for (int i = 0; i <= len1; ++i) {
        dp[i][0] = i;
    }
    for (int j = 0; j <= len2; ++j) {
        dp[0][j] = j;
    }

    for (int i = 1; i <= len1; ++i) {
        for (int j = 1; j <= len2; ++j) {
            if (str1[i] != str2[j]) {
                // 不相等
                dp[i][j] = min(min(dp[i - 1][j] + 1, dp[i][j - 1] + 1), dp[i - 1][j - 1] + 1);
            } else {
                // 相等就不用操作
                dp[i][j] = dp[i - 1][j - 1];
            }
        }
    }

    cout << dp[len1][len2] << endl;

    return 0;
}