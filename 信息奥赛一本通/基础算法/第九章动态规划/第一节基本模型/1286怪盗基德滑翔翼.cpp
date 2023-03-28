// 怪盗基德滑翔翼
#include <cstring>
#include <iostream>
using namespace std;

const int N = 110;
int arr[N], dp1[N], dp2[N];

int main() {
    int k;
    cin >> k;

    while (k--) {
        int n;
        cin >> n;
        for (int i = 1; i <= n; ++i) {
            cin >> arr[i];
        }

        memset(dp1, 0, sizeof dp1);
        memset(dp2, 0, sizeof dp2);

        for (int i = 1; i <= n; ++i) {
            dp1[i] = 1;
            dp2[i] = 1;
            for (int j = 1; j < n; ++j) {
                if (arr[j] < arr[i]) {
                    dp1[i] = max(dp1[i], dp1[j] + 1);
                }

                if (arr[j] > arr[i]) {
                    dp2[i] = max(dp2[i], dp2[j] + 1);
                }
            }
        }

        int ans = 0;
        for (int i = 1; i <= n; ++i) {
            ans = max(ans, max(dp1[i], dp2[i]));
        }
        cout << ans << endl;
    }

    return 0;
}