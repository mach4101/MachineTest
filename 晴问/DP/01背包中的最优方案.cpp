// 最优方案
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;

const int N = 110, M = 1e3 + 10;
int weight[N], value[N];
int dp[N][M];
int vis[N][M];
vector<int> item;

int main() {
    int n, v;
    cin >> n >> v;
    memset(vis, -1, sizeof vis);

    for (int i = 1; i <= n; ++i) {
        cin >> weight[i];
    }
    for (int i = 1; i <= n; ++i) {
        cin >> value[i];
    }

    for (int i = n; i >= 1; --i) {
        for (int j = 0; j <= v; ++j) {
            if (j >= weight[i]) {
                if (dp[i + 1][j] <= dp[i + 1][j - weight[i]] + value[i]) {
                    dp[i][j] = dp[i + 1][j - weight[i]] + value[i];
                    vis[i][j] = 0;  // 面对前i个物品，背包容量是j的时候，选择了第i个物品
                } else {
                    dp[i][j] = dp[i + 1][j];
                    vis[i][j] == 1;
                }
            } else {
                dp[i][j] = dp[i + 1][j];
            }
        }
    }
    for (int i = 1, j = v; i <= n; ++i) {
        if (vis[i][j] == 0) {
            item.push_back(i);
            j -= weight[i];
        }
    }
    cout << dp[1][v] << endl;

    for (int i = 0; i < item.size(); ++i) {
        cout << item[i];
        if (i < item.size() - 1)
            cout << " ";
    }
    return 0;
}