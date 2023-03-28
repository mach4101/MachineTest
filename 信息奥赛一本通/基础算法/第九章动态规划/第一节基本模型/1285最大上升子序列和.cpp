// 最大上升子序列和
#include<iostream>
using namespace std;

const int N = 1010;
int arr[N];
int dp[N];

int main() {
    int n;
    cin >> n;
    for(int i = 1; i <= n; ++i) {
        cin >> arr[i];
    }

    for(int i = 1; i <= n; ++i) {
        dp[i] = arr[i];
        for(int j = 1; j < i; ++j) {
            if(arr[j] < arr[i]) {
                dp[i] = max(dp[i], dp[j] + arr[i]);
            }
        }
    }

    int ans = 0;
    for(int i = 1; i <= n; ++i) {
        ans = max(ans, dp[i]);
    }

    cout << ans << endl;

    return 0;
}