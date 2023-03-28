// 最大的a减去最小的b就好
#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;

int a[100005], b[100005];
bool vis_a[100005], vis_b[100005];
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        for (int i = 0; i < m; ++i) {
            cin >> b[i];
        }

        sort(a, a + n, greater<int>());
        sort(b, b + m);

        long long sum = 0;
        for (int i = 0; i < n; ++i) {
            if (i >= m || a[i] <= b[i])
                break;  // 没枪，或者打不赢的时候就退出
            sum += a[i] - b[i];
        }
        cout << sum << endl;
    }

    return 0;
}