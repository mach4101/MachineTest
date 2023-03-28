#include <iostream>
using namespace std;

const int N = 25;
int dp[N][N];

int main() {
    int m, n;
    cin >> m >> n;

    for(int i = 1; i <= n; ++i) {
        dp[1][i] = 1;
    }

    for(int i = 1; i <= m; ++i) {
        dp[i][1] = 1;
    }

    for(int i = 2; i <= m; ++i) {
        for(int j = 2; j <= n; ++j ) {
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
        }
    }

    cout << dp[m][n] << endl;
    return 0;
}