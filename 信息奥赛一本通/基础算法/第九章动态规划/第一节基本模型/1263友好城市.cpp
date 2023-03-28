// 友好城市

#include <algorithm>
#include <iostream>
using namespace std;

struct City {
    int x, y;
};

City city[5500];
int dp[5500];
int dp2[5500];
bool cmp(City city1, City city2) {
    return city1.x < city2.x;
}
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> city[i].x >> city[i].y;
    }

    sort(city + 1, city + 1 + n, cmp);

    for (int i = 1; i <= n; ++i) {
        dp[i] = 1;
        for (int j = 1; j < i; ++j) {
            if (city[j].y < city[i].y)
                dp[i] = max(dp[i], dp[j] + 1);
        }
    }

    int ans = 0;
    for (int i = 1; i <= n; ++i) {
        ans = max(ans, dp[i]);
    }

    cout << ans << endl;
    return 0;
}