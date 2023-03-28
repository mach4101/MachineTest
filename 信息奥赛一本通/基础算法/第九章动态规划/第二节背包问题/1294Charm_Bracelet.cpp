// 魅力的项链
#include <iostream>
using namespace std;

int dp[15000];

int w[5000], c[5000];

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; ++i) {
        cin >> w[i] >> c[i];
    }

    for (int i = 1; i <= n; ++i) {
        for (int j = m; j >= w[i]; --j) {
            dp[j] = max(dp[j], dp[j - w[i]] + c[i]);
        }
    }

    cout << dp[m] << endl;

    return 0;
}