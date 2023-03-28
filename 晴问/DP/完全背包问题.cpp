// 完全背包
#include <iostream>
using namespace std;

const int N = 110, M = 1e3 + 10;
int dp[N][M];
int value[N];
int weight[N];

int main() {
    int n, v;
    cin >> n >> v;
    for (int i = 1; i <= n; ++i) {
        cin >> weight[i];
    }

    for (int i = 1; i <= n; ++i) {
        cin >> value[i];
    }

    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j <= v; ++j) {
            for (int k = 0; k * weight[i] <= j; ++k)
                dp[i][j] = max(dp[i][j], dp[i - 1][j - k * weight[i]] + k * value[i]);
        }
    }
    cout << dp[n][v] << endl;

    return 0;
}