// 01背包问题
#include <iostream>
using namespace std;

const int N = 110, M = 1e3 + 5;
int dp[N][M];
int weight[N];
int value[N];

int main() {
    int n, v;
    cin >> n >> v;

    for (int i = 1; i <= n; ++i) {
        cin >> weight[i];
    }

    for (int i = 1; i <= n; ++i) {
        cin >> value[i];
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= v; ++j) {
            if (j >= weight[i]) {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - weight[i]] + value[i]);
            }
        }
    }
    cout << dp[n][v] << endl;
}
