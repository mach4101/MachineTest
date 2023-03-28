#include <iostream>
using namespace std;

const int N = 30;
int map[N][N];
int dp[N][N];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i <= n + 1; ++i)
        for (int j = 0; j <= n + 1; ++j)
            dp[i][j] = -1e9;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            cin >> map[i][j];
        }
    }

    dp[1][1] = map[1][1];
    for (int i = 2; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + map[i][j];
        }
    }

    int ans = 0;
    for (int i = 1; i <= n; ++i) {
        ans = max(ans, dp[n][i]);
    }
    cout << ans << endl;
    return 0;
}