#include <iostream>
using namespace std;

const int N = 10005;
int times[N], value[N];
int dp[N][N];

int main() {
    int T, M;
    cin >> T >> M;

    for (int i = 1; i <= M; ++i) {
        cin >> times[i] >> value[i];
    }

    for (int i = 1; i <= M; ++i) {
        for (int j = 0; j <= T; ++j) {
            dp[i][j] = max(dp[i - 1][j], dp[i][j]);
            if (j - times[i] >= 0)
                dp[i][j] = max(dp[i][j], dp[i - 1][j - times[i]] + value[i]);
        }
    }

    cout << dp[M][T] << endl;
    return 0;
}