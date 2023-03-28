#include <iostream>
using namespace std;

const int N = 1e4 + 5;
int arr[N];
int dp[N];
int start[N];

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> arr[i];
    }
    start[1] = 1;

    for (int i = 1; i <= n; ++i) {
        if (arr[i] > dp[i - 1] + arr[i]) {
            // 重新起头
            start[i] = i;
            dp[i] = arr[i];
        } else {
            // 接在前面
            start[i] = start[i - 1];
            dp[i] = dp[i - 1] + arr[i];
        }
    }
    int ans = -1e9;
    int k = 1;
    for (int i = 1; i <= n; ++i) {
        if (dp[i] > ans) {
            ans = dp[i];
            k = i;
        }
    }
    cout << ans << " " << start[k] << " " << k << endl;

    return 0;
}