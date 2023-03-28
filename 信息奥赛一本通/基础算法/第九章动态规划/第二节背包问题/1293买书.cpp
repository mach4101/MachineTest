// 买书
#include<iostream>
using namespace std;

const int N = 1100;

int a[10] = {0, 10, 20, 50, 100};
int dp[10][N];

int main() {
    int n;
    cin >> n;

    for(int i = 0; i <= 4; ++i) {
        dp[i][0] = 1;
    }

    for(int i = 1; i <= 4; ++i) {
        for(int j = 1; j <= n; ++j) {
            if(j >= a[i]) {
                dp[i][j] = dp[i - 1][j] + dp[i][j - a[i]];
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    cout << dp[4][n] << endl;

    return 0;
}