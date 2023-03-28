#include <cmath>
#include <iostream>
using namespace std;

const int N = 35;
int dp[N];

int main() {
    int n;
    cin >> n;

    dp[1] = 0;
    dp[2] = 6;
    dp[3] = 6;

    for (int i = 4; i <= n; ++i) {
        dp[i] = dp[i - 1] + dp[i - 2] * 2;
    }

    cout << dp[n] << endl;

    return 0;
}