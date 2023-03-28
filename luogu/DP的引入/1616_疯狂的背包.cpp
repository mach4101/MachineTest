#include <algorithm>
#include <iostream>
using namespace std;

const int N = 1e7 + 5;
long long value[10005], times[10005];
long long dp[N];

int main() {
    int t, m;
    cin >> t >> m;

    for (int i = 1; i <= m; ++i) {
        cin >> times[i] >> value[i];
    }

    for (int i = 1; i <= m; ++i) {
        for (int j = times[i]; j <= t; ++j) {
            dp[j] = max(dp[j], dp[j - times[i]] + value[i]);
        }
    }

    cout << dp[t] << endl;

    return 0;
}