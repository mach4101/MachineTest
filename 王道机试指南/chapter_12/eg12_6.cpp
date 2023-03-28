#include <cstring>
#include <iostream>

using namespace std;

const int N = 10101;
int dp[N][N];
char str1[N];
char str2[N];

int main() {
    while (scanf("%s%s", str1 + 1, str2 + 1) != EOF) {
        int str1_len = strlen(str1 + 1);
        int str2_len = strlen(str2 + 1);

        for (int i = 0; i <= str1_len; ++i) {
            dp[i][0] = 0;
        }

        for (int i = 0; i <= str2_len; ++i) {
            dp[0][i] = 0;
        }

        for (int i = 1; i <= str1_len; ++i) {
            for (int j = 1; j <= str2_len; ++j)
                if (str1[i] == str2[j]) {
                    dp[i][j] = max(dp[i][j], dp[i - 1][j - 1] + 1);
                } else {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
        }

        cout << dp[str1_len][str2_len] << endl;
    }

    return 0;
}