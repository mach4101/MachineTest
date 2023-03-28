// 摘花生
#include <iostream>
using namespace std;

const int N = 150;
int map[N][N];
int dp[N][N];

int main() {
    int T;
    cin >> T;
    while (T--) {
        for (int i = 0; i < 110; ++i) {
            for (int j = 0; j < 110; ++j) {
                dp[i][j] = 0;
            }
        }
        int n, m;
        cin >> n >> m;
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= m; ++j) {
                cin >> map[i][j];
            }
        }

        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= m; ++j) {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]) + map[i][j];
            }
        }

        cout << dp[n][m] << endl;
    }

    return 0;
}