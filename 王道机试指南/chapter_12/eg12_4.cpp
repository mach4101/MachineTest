// 导弹拦截
#include <iostream>

using namespace std;

const int N = 1010;
int arr[N];
int dp[N];

int main() {
    int k;
    cin >> k;
    for (int i = 1; i <= k; ++i) {
        cin >> arr[i];
    }

    for (int i = 1; i <= k; ++i) {
        dp[i] = 1;
        for (int j = 1; j < i; ++j) {
            if (arr[i] <= arr[j])
                dp[i] = max(dp[i], dp[j] + 1);
        }
    }

    int ans = 0;
    for(int i = 1; i <= k; ++i) {
        ans = max(ans, dp[i]);
    }

    cout << ans << endl;
    return 0;
}