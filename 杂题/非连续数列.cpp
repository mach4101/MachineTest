#include <iostream>
#include <string>
using namespace std;

// dp[i]表示长度为i的序列中，不出现连续两个0的序列个数

int dp[10005];

int main() {
    int n;
    cin >> n;

    dp[0] = 0;
    dp[1] = 10;
    dp[2] = 99;
    
    for (int i = 3; i <= n; ++i) {
        dp[i] = dp[i - 1] * 9 + dp[i - 2] * 9 % 10007;
    }

    cout << dp[n] << endl;

    return 0;
}