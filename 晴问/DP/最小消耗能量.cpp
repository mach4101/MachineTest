#include <cmath>
#include <iostream>
using namespace std;

const int N = 1e4 + 5;
int dp[N];
int h[N];

// dp[i] = min(dp[i - 1] + abs(h[i] - h[i - 1]), dp[i - 2] + abs(h[i] - h[i - 2]))

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> h[i];
    }

    for (int i = 2; i <= n; ++i) {
        dp[i] = min(dp[i - 1] + abs(h[i] - h[i - 1]), dp[i - 2] + abs(h[i] - h[i - 2]));
    }

    cout << dp[n] << endl;
    return 0;
}