// 递增子序列的最大和
#include <iostream>
using namespace std;

const int N = 1005;
int dp[N];
int a[N];

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    dp[1] = a[1];

    // dp[i]表示以 i结尾的上升子序列的和的最大值
    // dp[i] = max(dp[1 ~ i-1] + a[i], a[i])
    for (int i = 2; i <= n; ++i) {
        dp[i] = a[i];
        for (int j = 1; j <= i - 1; ++j) {
            if (a[j] <= a[i])
                dp[i] = max(dp[i], dp[j] + a[i]);
        }
    }

    int ans = 0;
    for (int i = 1; i <= n; ++i)
        ans = max(ans, dp[i]);
    cout << ans << endl;

    return 0;
}