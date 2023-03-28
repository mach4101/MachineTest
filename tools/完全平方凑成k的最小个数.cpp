#include <cstring>
#include <iostream>
using namespace std;

const int N = 110;
int dp[N][N];
int weight[N];

int main() {
    int n, k;
    cin >> n >> k;  // 使用n个数凑满k的最小个数

    for (int i = 1; i <= n; ++i) {
        cin >> weight[i];
    }
    // 数组初始化为最大值
    memset(dp, 0x3f, sizeof dp);

    for (int i = 0; i <= n; ++i) {
        // 凑成零，物品数为零个
        dp[i][0] = 0;
    }

    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j <= k; ++j) {
            for (int s = 1; s * weight[i] <= j; ++s) {
                dp[i][j] = min(dp[i][j], dp[i - s][j - s * weight[i]] + s);
            }
        }
    }

    if (dp[n][k] > 100000000)
        cout << -1 << endl;
    else
        cout << dp[n][k] << endl;

    return 0;
}