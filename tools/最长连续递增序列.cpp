// 最长连续递增序列
#include<iostream>
using namespace std;

const int N = 1100;
int a[N];
int dp[N];

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for(int i = 0; i < n; ++i) dp[i] = 1;

    // 滑动窗口
    for(int i = 1; i < n; ++i) {
        if(a[i] > a[i - 1]) {
            dp[i] = dp[i - 1] + 1;
        } else {
            dp[i] = 0;
        }
    }

    int ans = 0;
    for(int i = 0; i < n; ++i) {
        ans = max(ans, dp[i]);
    }

    cout << ans << endl;
    return 0;
}