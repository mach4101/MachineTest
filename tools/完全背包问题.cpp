#include <algorithm>
#include <iostream>
using namespace std;

const int N = 1010;
int W[N], V[N], dp[N][N];

int main() {
    int n, v;
    cin >> n >> v;
    for (int i = 1; i <= n; ++i) {
        cin >> V[i] >> W[i];
    }

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= v; ++j) {
            dp[i][j] = dp[i - 1][j];
            if (V[i] <= j) {
                dp[i][j] = max(dp[i][j], dp[i][j - V[i]] + W[i]);
            }
        }
    }

    cout << dp[n][v] << endl;
    return 0;
}