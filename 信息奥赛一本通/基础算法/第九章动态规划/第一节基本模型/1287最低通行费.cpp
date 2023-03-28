// 最低通行费
#include <iostream>
using namespace std;

const int N = 110;
int map[N][N];
int dp[N][N];

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> map[i][j];
        }
    }

    for (int i = 0; i <= n; ++i)
        dp[i][0] = 1e9;
    for (int i = 0; i <= n; ++i)
        dp[0][i] = 1e9;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (i == 1 && j == 1)
                dp[i][j] = map[i][j];
            else
                dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]) + map[i][j];
        }
    }

    cout << dp[n][n] << endl;

    return 0;
}