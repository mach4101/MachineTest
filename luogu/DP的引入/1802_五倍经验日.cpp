#include <iostream>
using namespace std;
const int N = 1e4 + 5;
int exp_lose[N], exp_win[N], need[N];

// dp[i][j]表示再遇到第i个怪的时候，药水数量为j时的最大经验
int dp[N][N];

int main() {
    int n, x;
    cin >> n >> x;

    for (int i = 1; i <= n; ++i) {
        cin >> exp_lose[i] >> exp_win[i] >> need[i];
    }

    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j <= x; ++j) {
            if (j >= need[i]) {
                dp[i][j] = max(dp[i - 1][j] + exp_lose[i], dp[i - 1][j - need[i]] + exp_win[i]);
            } else {
                dp[i][j] = dp[i - 1][j] + exp_lose[i];
            }
        }
    }

    cout << dp[n][x] * 5 << endl;

    return 0;
}