// 最长上升子序列的最优方案
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;

const int N = 110;
int arr[N], dp[N];
int sele[N];

void print(int n) {
    if (sele[n] == -1) {
        cout << arr[n] << " ";
        return;
    }

    print(sele[n]);
    cout << arr[n] << " ";
}

int main() {
    int n;
    cin >> n;

    memset(sele, -1, sizeof sele);
    for (int i = 1; i <= n; ++i) {
        cin >> arr[i];
    }

    for (int i = 1; i <= n; ++i) {
        dp[i] = 1;
        for (int j = 1; j < i; ++j) {
            if (arr[j] <= arr[i]) {
                if (dp[i] < dp[j] + 1) {
                    dp[i] = dp[j] + 1;
                    sele[i] = j;
                }
            }
        }
    }
    int k = 0;

    int ans = 0;
    for (int i = 1; i <= n; ++i) {
        if (dp[i] > ans) {
            ans = dp[i];
            k = i;  // 最后一个下标
        }
    }

    cout << ans << endl;
    print(k);

    return 0;
}