// 最长不下降子序列

#include <iostream>
#include <vector>
using namespace std;

const int N = 205;
int dp[N];
int arr[N];

vector<int> res;

int main() {
    int n;

    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> arr[i];
    }

    for (int i = 1; i <= n; ++i) {
        dp[i] = 1;
        for (int j = 1; j < i; ++j) {
            if (arr[j] <= arr[i]) {
                dp[i] = max(dp[j] + 1, dp[i]);
            }
        }
    }

    int ans = 0;
    for (int i = 1; i <= n; ++i) {
        ans = max(ans, dp[i]);
    }

    cout << "max=" << ans << endl;

    for (int i = n; i >= 1; --i) {
        if (dp[i] == ans) {
            res.push_back(arr[i]);
            ans--;
        }
    }

    for (int i = res.size() - 1; i >= 0; --i) {
        cout << res[i] << " ";
    }
    cout << endl;

    return 0;
}