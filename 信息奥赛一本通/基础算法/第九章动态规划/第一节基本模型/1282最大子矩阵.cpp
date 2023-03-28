// 最大子矩阵

#include <cstring>
#include <iostream>
using namespace std;

const int N = 150;
int map[N][N];
int dp[N];
int tem[N];
int n;
// 最大子段和
int max_sum() {
    // dp[i]表示以i结尾的最大子段和，既可以从上一个开始转移，也可以从头开始
    for (int i = 1; i <= n; ++i) {
        dp[i] = max(dp[i - 1] + tem[i], tem[i]);
    }

    int ans = -1e9;
    for (int i = 1; i <= n; ++i) {
        ans = max(ans, dp[i]);
    }
    return ans;
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> map[i][j];
        }
    }

    for (int i = 2; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            map[i][j] = map[i - 1][j] + map[i][j];
        }
    }

    int ans = -1e9;

    for (int i = 1; i <= n; ++i) {
        for (int j = i; j <= n; ++j) {
            
            for (int k = 0; k <= n; ++k)
                dp[k] = -1e9;

            if (i == 1 && j == 1) {
                for (int k = 1; k <= n; ++k) {
                    tem[k] = map[1][k];
                }
            } else {
                for (int k = 1; k <= n; ++k) {
                    tem[k] = map[j][k] - map[i - 1][k];
                }
            }

            ans = max(ans, max_sum());
        }
    }
    cout << ans << endl;

    return 0;
}