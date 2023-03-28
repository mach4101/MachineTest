#include <iostream>

using namespace std;

const int N = 1000005;

int a[N];
int dp[N];

int main() {
    int n;
    while (cin >> n) {
        for (int i = 1; i <= n; ++i) {
            cin >> a[i];
        }

        for (int i = 1; i <= n; ++i) {
            dp[i] = max(a[i], dp[i - 1] + a[i]);
        }

        int ans = dp[1];
        for (int i = 1; i <= n; ++i) {
            ans = max(ans, dp[i]);
        }

        cout << ans << endl;
    }

    return 0;
}