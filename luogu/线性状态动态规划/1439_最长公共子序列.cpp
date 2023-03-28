// lcs

#include <cstring>
#include <iostream>
using namespace std;

const int N = 1e5 + 5;
char p1[N], p2[N];
int dp[N][N];

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> p1[i];
    }

    for (int i = 1; i <= n; ++i) {
        cin >> p2[i];
    }

    dp[0][0] = 0;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            if (p1[i] == p2[j])
                dp[i][j] = max(dp[i][j], dp[i - 1][j - 1] + 1);
        }
    }

    cout << dp[n][n] << endl;
    return 0;
}