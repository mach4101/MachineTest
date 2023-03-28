#include <iostream>
using namespace std;

const int N = 1000005;
int dp[N];

int main() {
    int n;
    cin >> n;

    dp[1] = 1;
    dp[2] = 1;
    for (int i = 3; i <= N; ++i) {
        dp[i] = (dp[i - 1] + dp[i - 2]) % 1000;
    }

    while (n--) {
        int x;
        cin >> x;
        cout << dp[x] << endl;
    }

    return 0;
}