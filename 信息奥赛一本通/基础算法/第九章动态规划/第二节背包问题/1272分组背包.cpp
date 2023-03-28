// 分组背包
#include <iostream>
#include <vector>
using namespace std;

const int N = 300;
int dp[N][N];
int w[N], c[N];
vector<int> g[N];  // 存储第i组物品的编号

int main() {
    int v, n, t;
    cin >> v >> n >> t;

    for (int i = 1; i <= n; ++i) {
        cin >> w[i] >> c[i];  // 分别是重量，价值，组号
        int p;
        cin >> p;
        g[p].push_back(i);  // 第p组包含物品i的编号
    }

    // 便利各组
    for (int i = 1; i <= t; ++i) {
        for (int j = 0; j <= v; ++j) {
            dp[i][j] = dp[i - 1][j];  // 不选

            // 从第i组中，选一个物品，01背包
            for (int k = 0; k < g[i].size(); ++k) {
                // x是该组中成员的编号
                int x = g[i][k];
                if (w[x] <= j) {
                    dp[i][j] = max(dp[i][j], dp[i - 1][j - w[x]] + c[x]);
                }
            }
        }
    }
    cout << dp[t][v] << endl;
    return 0;
}