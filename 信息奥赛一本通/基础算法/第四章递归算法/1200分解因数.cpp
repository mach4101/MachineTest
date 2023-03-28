// 分解因数
#include <iostream>
using namespace std;

int ans;

void dfs(int a, int start) {
    if (a == 1) {
        ans++;
        return;
    }
    for (int i = 2; i <= a; ++i) {
        if (a % i == 0) {
            dfs(a / i, i);
        }
    }
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        ans = 0;
        int a;
        cin >> a;
        dfs(a, 1);
        cout << ans << endl;
    }

    return 0;
}