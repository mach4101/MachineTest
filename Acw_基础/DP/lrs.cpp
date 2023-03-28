// 最长上升子序列
#include <algorithm>
#include <iostream>

using namespace std;

const int N = 1005;
int s[N], dp[N];

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        cin >> s[i];
    }

    dp[0] = -1e9;
    for (int i = 1; i <= n; ++i) {
        dp[i] = 1;
        for (int j = 1; j < i; ++j) {
            if (s[j] < s[i])
                dp[i] = max(dp[j] + 1, dp[i]);
        }
    }

    int res = -1e9;

    for (int i = 1; i <= n; ++i) {
        res = max(res, dp[i]);
    }

    cout << res << endl;

    return 0;
}