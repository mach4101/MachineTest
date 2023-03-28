#include <cstring>
#include <iostream>
using namespace std;

const int N = 1010;
int dp[N];

void dfs(int n) {
    if (dp[n] != -1)
        return;

    dp[n] = 1; // 自身的一种情况

    for (int i = 1; i <= n / 2; ++i) {
        dfs(i);
        dp[n] += dp[i];
    }
}

int main() {
    int n;
    cin >> n;
    memset(dp, -1, sizeof(dp));
    dfs(n);
    cout << dp[n] << endl;

    return 0;
}