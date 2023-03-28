// 01背包
#include <iostream>
using namespace std;

const int N = 350;
int value[N], weight[N];
int dp[N][N];
int main() {
    int m, n;       //
    cin >> m >> n;  // 分别是背包容量，物品价值

    for (int i = 1; i <= n; ++i) {
        cin >> weight[i] >> value[i];
    }

    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j <= m; ++j) {
            if (j >= weight[i]) {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - weight[i]] + value[i]);
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    cout << dp[n][m] << endl;
    return 0;
}