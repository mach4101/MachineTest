// 数字金字塔

#include <iostream>
using namespace std;

int map[1005][1005];
int dp[1005][1005];

int main() {
    int r;
    cin >> r;

    for (int i = 1; i <= r; ++i) {
        for (int j = 1; j <= i; ++j) {
            cin >> map[i][j];
        }
    }

    for (int i = 0; i <= r + 1; ++i) {
        for (int j = 0; j <= i + 1; ++j) {
            dp[i][j] = 0;
        }
    }

    for (int i = 1; i <= r; ++i) {
        for (int j = 1; j <= i; ++j) {
            dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + map[i][j];
        }
    }
    int ans = -1e9;

    for (int i = 1; i <= r; ++i) {
        ans = max(ans, dp[r][i]);
    }

    cout << ans << endl;
    return 0;
}
