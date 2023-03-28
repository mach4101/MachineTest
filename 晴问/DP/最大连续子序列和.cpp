#include <iostream>
using namespace std;

const int N = 1e4 + 5;
int dp[N];
int a[N];

// dp[i] 表示以第i个数字结尾的最长连续子序列的和最大值

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    dp[0] = 0;
    dp[1] = a[1];

    for (int i = 2; i <= n; ++i) {
        dp[i] = max(dp[i - 1] + a[i], a[i]);
    }

    int ans = -1e9;
    for(int i = 1; i <= n ; ++i) {
        ans = max(ans, dp[i]);
    }
    cout << ans << endl;
    return 0;
}