// 点菜问题
#include <iostream>

using namespace std;

const int N = 1101;
int price[N];
int taste[N];

int dp[N][N];

int main() {
    int c, n;
    while (cin >> c >> n) {
        for (int i = 1; i <= n; ++i) {
            cin >> price[i] >> taste[i];
        }

        for (int i = 0; i <= n; ++i) {
            dp[i][0] = 0;
        }

        for (int i = 0; i <= c; ++i) {
            dp[0][i] = 0;
        }

        for (int i = 1; i <= n; ++i) {
            for (int j = 0; j <= c; ++j) {
                if (j >= price[i]) {
                    dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - price[i]] + taste[i]);
                } else {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }

        cout << dp[n][c] << endl;
    }

    return 0;
}
