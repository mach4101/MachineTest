// 具体方案数量

#include <iostream>
using namespace std;

const int N = 110, M = 1e3 + 10;
int weight[N];
int dp[N][M];

int main() {
    int n, v;
    cin >> n >> v;
    for (int i = 1; i <= n; ++i) {
        cin >> weight[i];
    }

    for (int i = 0; i <= n; ++i) {
        dp[i][0] = 1;
    }

    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j <= v; ++j) {
            if (j >= weight[i]) {
                dp[i][j] = (dp[i - 1][j] + dp[i - 1][j - weight[i]]) % 10007;
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    cout << dp[n][v] << endl;

    return 0;
}