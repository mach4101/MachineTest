// 拦截导弹，最长不上升子序列与最长上升子序列问题

#include <iostream>
using namespace std;

const int N = 1010;
int arr[N], dp[N], dp2[N];

int main() {
    int idx = 0;
    while (cin >> arr[++idx]) {
    }

    idx--;

    for (int i = 1; i <= idx; ++i) {
        dp[i] = 1;
        dp2[i] = 1;
        for (int j = 1; j < i; ++j) {
            if (arr[j] >= arr[i]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }

            if (arr[j] < arr[i]) {
                dp2[i] = max(dp2[i], dp2[j] + 1);
            }
        }
    }

    int ans = 0;
    for (int i = 1; i <= idx; ++i) {
        ans = max(ans, dp[i]);
    }

    int ans2 = 0;
    for (int i = 1; i <= idx; ++i) {
        ans2 = max(ans2, dp2[i]);
    }

    cout << ans << endl
         << ans2 << endl;

    return 0;
}