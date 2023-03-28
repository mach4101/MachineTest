#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;

const int N = 2010;
char str[N][N];
int dp[N][N];

int trans(char a[], char b[]) {
    int la = strlen(a + 1), lb = strlen(b + 1);

    for (int i = 0; i <= lb; ++i)
        dp[0][i] = i;
    for (int j = 0; j <= la; ++j)
        dp[j][0] = j;

    for (int i = 1; i <= la; ++i) {
        for (int j = 1; j <= lb; ++j) {
            if (a[i] == b[j])
                dp[i][j] = dp[i - 1][j - 1];
            else {
                dp[i][j] = min(dp[i][j - 1] + 1, min(dp[i - 1][j] + 1, dp[i - 1][j - 1] + 1));
            }
        }
    }
    return dp[la][lb];
}

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; ++i) {
        scanf("%s", str[i] + 1);
    }

    while (m--) {
        char target[N];
        int step = 0, count = 0;
        scanf("%s%d", target + 1, &step);

        for (int i = 0; i < n; ++i) {
            if (trans(str[i], target) <= step)
                count++;
        }
        cout << count << endl;
    }

    return 0;
}