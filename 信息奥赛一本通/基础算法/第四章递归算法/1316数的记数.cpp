#include <iostream>
using namespace std;

int ans = 0;

void dfs(int n) {
    ans++;
    for (int i = 1; i <= n / 2; ++i) {
        dfs(i);
    }
}

int main() {
    int n;
    cin >> n;
    dfs(n);
    cout << ans << endl;

    return 0;
}