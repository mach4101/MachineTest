#include <iostream>

using namespace std;

const int N = 105;
int arr[N];
int dp[N];

int lrs(int l, int r) {
    for (int i = l; i <= r; ++i) {
        dp[i] = 1;
        for (int j = l; j < i; ++j) {
            if (arr[i] > arr[j]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }

    int ans = 0;
    for (int i = l; i <= r; ++i) {
        ans = max(ans, dp[i]);
    }
    return ans;
}

int lds(int l, int r) {
    for (int i = l; i <= r; ++i) {
        dp[i] = 1;
        for (int j = l; j < i; ++j) {
            if (arr[i] < arr[j]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
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
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        cin >> arr[i];
    }

    int ans = 0;

    for (int i = 1; i <= n; ++i) {
        int ans1 = lrs(1, i);
        int ans2 = lds(i, n);
        ans = max(ans, ans1 + ans2 - 1);
    }

    cout << n - ans << endl;

    return 0;
}