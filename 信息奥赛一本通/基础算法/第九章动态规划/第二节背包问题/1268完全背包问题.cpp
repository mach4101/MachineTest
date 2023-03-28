// 完全背包
#include <iostream>
using namespace std;

const int N = 250;
int dp[N][N];
int weight[N], value[N];

int main() {
    int n, m;
    cin >> m >> n;

    for (int i = 1; i <= n; ++i) {
        cin >> weight[i] >> value[i];
    }

    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j <= m; ++j) {
            for (int k = 0; k * weight[i] <= j; ++k) {
                dp[i][j] = max(dp[i][j], dp[i - 1][j - k * weight[i]] + k * value[i]);
            }
        }
    }

    // cout << "max=" << dp[n][m] << endl;

    return 0;
}