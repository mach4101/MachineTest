// 一切不幸的开端

#include <iostream>
using namespace std;

int v[1005], w[1005];
int dp[1005][1005];

int main() {
    int N, V;
    cin >> N >> V;  // 分别是物品的件数和背包的容量
    for (int i = 1; i <= N; ++i) {
        cin >> v[i] >> w[i];  // 分别是物品的体积和物品的价值
    }

    dp[0][0] = 0;

    for (int i = 1; i <= N; ++i) {
        for (int j = 0; j <= V; ++j) {
            if (j >= v[i]) {  // 可选
                dp[i][j] = max(dp[i - 1][j - v[i]] + w[i], dp[i - 1][j]);
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    cout << dp[N][V] << endl;

    return 0;
}