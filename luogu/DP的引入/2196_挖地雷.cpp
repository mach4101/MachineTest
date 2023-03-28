#include <iostream>
using namespace std;

const int N = 100;

int lei[N], dp[N], map[N][N], dis[N];

void dfs(int x) {
    if (dis[x]) {
        dfs(dis[x]);
    }

    cout << x << " ";
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> lei[i];
    }

    for (int i = 1; i <= n - 1; ++i) {
        for (int j = i + 1; j <= n; ++j) {
            cin >> map[i][j];
        }
    }

    int ans = 0, pos = 0;
    dp[1] = lei[1];

    for (int i = 2; i <= n; ++i) {
        dp[i] = lei[i];
        for (int j = 1; j <= i - 1; ++j) {
            if (map[j][i] && dp[i] < lei[i] + dp[j]) {
                dp[i] = lei[i] + dp[j];
                dis[i] = j;
            }
        }

        if (dp[i] > ans) {
            ans = max(ans, dp[i]);
            pos = i;
        }
    }

    dfs(pos);
    cout << endl
         << ans;

    return 0;
}