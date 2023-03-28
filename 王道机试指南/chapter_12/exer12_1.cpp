// 吃糖果

#include <iostream>
using namespace std;

const int N = 100;
int dp[N];

int main() {
    dp[1] = 1;
    dp[2] = 2;

    for (int i = 3; i <= 100; ++i) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    int n;
    while (cin >> n) {
        cout << dp[n] << endl;
    }

    return 0;
}