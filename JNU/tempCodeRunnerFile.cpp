#include <iostream>
using namespace std;

const int N = 1100;
int arr[N];
int dp[N];
int start[N];

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> arr[i];
    }

    for (int i = 1; i <= n; ++i) {
        if (arr[i] + dp[i - 1] < arr[i]) {
            // 重新起头
            start[i] = i;
            dp[i] = arr[i];
        } else {
            start[i] = start[i - 1];
            dp[i] = dp[i - 1] + arr[i];
        }
    }

    int k = 1, ans = dp[1];
    for (int i = 1; i <= n; ++i) {
        if (ans < dp[i]) {
            ans = dp[i];
            k = i;
        }
    }

    cout << ans << " " << start[k] << " " << k << endl;

    return 0;
}