// 递推

#include<iostream>
using namespace std;


long long dp[35][35];
// dp[i][j]表示有i个物品需要放到j个盘子里的方案数

int main() {
    int n, k;
    cin >> n >> k;

    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= i &&  j <= k; ++j) {
            if(j == 1) {
                dp[i][j] = 1;
            } else {
                dp[i][j] = dp[i - 1][j] * j + dp[i - 1][j - 1];
            }
        }
    }

    cout << dp[n][k] << endl;

    return 0;
}