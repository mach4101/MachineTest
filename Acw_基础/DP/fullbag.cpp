#include <algorithm>
#include <iostream>

using namespace std;

int v[1005];
int w[1005];
int dp[1005][1005];

int main() {
    int N, V;
    cin >> N >> V;  // 分别是件数和背包容量

    for (int i = 1; i <= N; ++i) {
        cin >> v[i] >> w[i];  // 分别是体积和价值
    }

    for (int i = 1; i <= N; ++i) {
        for (int j = 0; j <= V; ++j) {
            for (int k = 0; k * v[i] <= j; ++k) {
                dp[i][j] = max(dp[i][j], dp[i - 1][j - k * v[i]] + k * w[i]);
            }
        }
    }

    cout << dp[N][V] << endl;

    return 0;
}