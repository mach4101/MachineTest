// 逆序输出
#include <iostream>
#include <stack>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        stack<long long> stk;
        for (int i = 0; i < n; ++i) {
            int tmp;
            cin >> tmp;
            stk.push(tmp);
        }

        for (int i = 0; i < n; ++i) {
            cout << stk.top() << " ";
            stk.pop();
        }

        cout << endl;
    }

    return 0;
}