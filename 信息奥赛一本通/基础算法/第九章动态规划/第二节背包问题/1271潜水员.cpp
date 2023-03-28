#include <cstring>
#include <iostream>
using namespace std;

const int N = 1100;
// 氧气、氮气、气缸重量
int a[N], b[N], c[N];
int dp[N][30][85];
// dp[l][i][j] 表示前l个气缸中，拥有至少i升氧气容量的方案中，总重量最少的方案中气缸的总重量

int main() {
    int m, n;
    // 氧气，氮气所需要的量
    cin >> m >> n;

    // 气缸的数量
    int k;
    cin >> k;

    for (int i = 1; i <= k; ++i) {
        cin >> a[i] >> b[i] >> c[i];
    }

    memset(dp, 0x3f, sizeof dp);

    dp[0][0][0] = 0;

    for (int l = 1; l <= k; ++l) {
        for (int i = 0; i <= m; ++i) {
            for (int j = 0; j <= n; ++j) {
                dp[l][i][j] = min(dp[l - 1][max(0, i - a[l])][max(0, j - b[l])] + c[l], dp[l - 1][i][j]);
            }
        }
    }
    cout << dp[k][m][n] << endl;

    return 0;
}