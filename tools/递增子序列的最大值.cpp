// 递增最大
#include <iostream>
using namespace std;

const int N = 1e4 + 5;
int dp[N], a[N], start[N];

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    for (int i = 1; i <= n; ++i) {
        if (dp[i - 1] + a[i] < a[i]) {  // 重新开头
            dp[i] = a[i];
            start[i] = i;
        } else {
            dp[i] = dp[i - 1] + a[i];
            start[i] = start[i - 1];
        }
    }

    int k = 0, ans = -1e9;
    for (int i = 1; i <= n; ++i) {
        if (dp[i] > ans) {
            ans = dp[i];
            k = i;
        }
    }

    cout << ans << " " << start[k] << " " << k << endl;
    return 0;
}