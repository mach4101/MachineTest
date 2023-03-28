// 上台阶

#include <iostream>
using namespace std;

const int N = 80;
long long dp[N];

int main() {
    int n;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;

    for (int i = 4; i <= 75; ++i) {
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
    }

    while (cin >> n) {
        if (n == 0)
            break;
        cout << dp[n] << endl;
    }

    return 0;
}