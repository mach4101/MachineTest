    // 01背包最优方案
    #include <cstring>
    #include <iostream>
    #include <vector>
    using namespace std;

    const int N = 110, M = 1100;
    int dp[N][M];
    int weight[N], value[N];
    bool vis[N][N];

    int main() {
        int n, v;
        cin >> n >> v;

        for (int i = 1; i <= n; ++i) {
            cin >> weight[i];
        }

        for (int i = 1; i <= n; ++i) {
            cin >> value[i];
        }

        memset(vis, -1, sizeof vis);

        for (int i = n; i >= 1; --i) {
            for (int j = 0; j <= v; ++j) {
                if (weight[i] <= j) {
                    if (dp[i + 1][j] <= dp[i + 1][j - weight[i]] + value[i]) {
                        dp[i][j] = dp[i + 1][j - weight[i]] + value[i];
                        vis[i][j] = 1;
                    } else {
                        dp[i][j] = dp[i + 1][j];
                        vis[i][j] = 0;
                    }
                } else {
                    dp[i][j] = dp[i + 1][j];
                }
            }
        }

        vector<int> ans;

        for (int i = 1, j = v; i <= n; ++i) {
            if (vis[i][j] == 1) {
                j -= weight[i];
                ans.push_back(i);
            }
        }

        cout << dp[1][v] << endl;

        for (int i = 0; i < ans.size(); ++i) {
            cout << ans[i] << " ";
        }
        cout << endl;

        return 0;
    }