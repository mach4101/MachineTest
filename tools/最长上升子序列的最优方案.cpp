#include <algorithm>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;

const int N = 1111;
int a[N], dp[N], pre[N];

void print(int k) {
    if (pre[k] == -1) {
        cout << a[k] << " ";
        return;
    }
    print(pre[k]);
    cout << a[k] << " ";
}

int main() {
    int n;
    cin >> n;
    memset(pre, -1, sizeof pre);
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    for (int i = 1; i <= n; ++i) {
        dp[i] = 1;
        for (int j = 1; j < i; ++j) {
            if (a[j] <= a[i]) {
                if (dp[j] + 1 > dp[i]) {
                    pre[i] = j;
                    dp[i] = dp[j] + 1;
                }
            }
        }
    }

    int ans = -1e9, k = 0;
    for (int i = 1; i <= n; ++i) {
        if (ans < dp[i]) {
            ans = dp[i];
            k = i;
        }
    }

    cout << ans << endl;
    vector<int> res;
    while (k != -1) {
        res.push_back(a[k]);
        k = pre[k];
    }

    reverse(res.begin(), res.end());

    for (int i = 0; i < res.size(); ++i) {
        cout << res[i];
        if(i == res.size() - 1) cout << endl;
        else cout << " ";
    }
    cout << endl;

    return 0;
}