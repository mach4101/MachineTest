// 合唱队形

#include <iostream>
using namespace std;

const int N = 110;
int arr[N];
int dp[N];

int sum_lrs(int l, int r) {
    for (int i = l; i <= r; ++i) {
        dp[i] = 1;
        for (int j = l; j < i; ++j) {
            if (arr[j] < arr[i])
                dp[i] = max(dp[j] + 1, dp[i]);
        }
    }

    int ans = 0;
    for (int i = l; i <= r; ++i) {
        ans = max(ans, dp[i]);
    }
    return ans;
}

int sum_lds(int l, int r) {
    for (int i = l; i <= r; ++i) {
        dp[i] = 1;
        for (int j = l; j < i; ++j) {
            if (arr[j] > arr[i])
                dp[i] = max(dp[i], dp[j] + 1);
        }
    }
    int ans = 0;
    for (int i = l; i <= r; ++i) {
        ans = max(ans, dp[i]);
    }
    return ans;
}

int main() {
    int n;
    int ans = 0;
    cin >> n;
    while (cin >> n) {
        for (int i = 1; i <= n; ++i) {
            cin >> arr[i];
        }
        // 枚举最高点，左边最长上升子序列，右边最长下降子序列

        for (int i = 1; i <= n; ++i) {
            ans = max(ans, sum_lrs(1, i) + sum_lds(i, n));
        }
        cout << n - ans + 1 << endl;
    }
    return 0;
}