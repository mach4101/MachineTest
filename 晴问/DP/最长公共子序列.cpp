#include <cstring>
#include <iostream>
using namespace std;

const int N = 110;
char str1[N], str2[N];
int dp[N][N];

int main() {
    scanf("%s%s", str1 + 1, str2 + 1);
    int str1_len = strlen(str1 + 1);
    int str2_len = strlen(str2 + 1);

    for (int i = 1; i <= str1_len; ++i) {
        for (int j = 1; j <= str2_len; ++j) {
            dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            if (str1[i] == str2[j])
                dp[i][j] = max(dp[i][j], dp[i - 1][j - 1] + 1);
        }
    }

    cout << dp[str1_len][str2_len] << endl;

    return 0;
}