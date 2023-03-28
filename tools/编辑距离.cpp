// 编辑距离
#include <cstring>
#include <iostream>
using namespace std;

char str1[110], str2[110];
int dp[110][110];

int main() {
    memset(dp, 0x3f, sizeof dp);

    scanf("%s%s", str1 + 1, str2 + 1);
    int len1 = strlen(str1 + 1);
    int len2 = strlen(str2 + 1);

    for (int i = 0; i <= len1; ++i) {
        dp[i][0] = i;
    }

    for (int i = 0; i <= len2; ++i) {
        dp[0][i] = i;
    }

    for (int i = 1; i <= len1; ++i) {
        for (int j = 1; j <= len2; ++j) {
            if (str1[i] == str2[j]) {
                dp[i][j] = dp[i - 1][j - 1];
            } else {
                dp[i][j] = min(dp[i - 1][j], min(dp[i][j - 1], dp[i - 1][j - 1])) + 1;
            }
        }
    }

    cout << dp[len1][len2] << endl;
    return 0;
}