// 登山
#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;

const int N = 1010;

int height[N];
int dp1[N], dp2[N];

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> height[i];
    }


    for (int i = 1; i <= n; ++i) {
        dp1[i] = 1;
        for (int j = 1; j < n; ++j) {
            if (height[j] < height[i])
                dp1[i] = max(dp1[i], dp1[j] + 1);
        }
    }

    for (int i = n; i >= 1; --i) {
        dp2[i] = 1;
        for (int j = n; j > i; --j) {
            if (height[j] < height[i]) {
                dp2[i] = max(dp2[i], dp2[j] + 1);
            }
        }
    }

    int ans = 0;

    for (int i = 1; i <= n; ++i) {
        ans = max(ans, dp1[i] + dp2[i] - 1);
    }
    cout << ans << endl;

    return 0;
}