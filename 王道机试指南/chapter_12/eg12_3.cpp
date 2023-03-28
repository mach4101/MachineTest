// 最大子矩阵

#include <iostream>
using namespace std;

const int N = 110;
int map[N][N];  // 原始矩阵
int dp[N];      // 动态规划矩阵
int sum[N][N];  // 前缀和矩阵
int arr[N];
int ans = 0;

int MaxSubsequenceValue(int n) {
    int ans = -1e9;
    for (int i = 1; i <= n; ++i) {
        dp[i] = max(arr[i], dp[i - 1] + arr[i]);
        ans = max(ans, dp[i]);
    }

    return ans;
}

int MaxSubMatrix(int n) {
    int ans = -1e9;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            for (int k = 1; k <= n; ++k) {
                if (i == 1)
                    arr[k] = sum[j][k];
                else
                    arr[k] = sum[j][k] - sum[i - 1][k];
            }

            int res = MaxSubsequenceValue(n);
            ans = max(ans, res);
        }
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> map[i][j];
        }
    }

    // 初始化辅助函数，转化为一维

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (i == 1)
                sum[i][j] = map[i][j];
            else
                sum[i][j] = sum[i - 1][j] + map[i][j];
        }
    }

    int maxcount = MaxSubMatrix(n);
    cout << maxcount << endl;
    return 0;
}