// 十进制转二进制
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> ans;
    while (n) {
        ans.push_back(n % 2);
        n /= 2;
    }

    for(int i = ans.size() - 1; i >= 0; --i) {
        cout << ans[i];
    }
    cout << endl;

    return 0;
}