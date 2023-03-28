// 装箱问题

#include <iostream>
using namespace std;

int weight[35];

int dp[35][20010];

int main() {
    int v, n;
    cin >> v >> n;

    for (int i = 1; i <= n; ++i) {
        cin >> weight[i];
    }

    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j <= v; ++j) {
            if (j >= weight[i]) {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - weight[i]] + weight[i]);
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    cout << v - dp[n][v] << endl;

    return 0;
}