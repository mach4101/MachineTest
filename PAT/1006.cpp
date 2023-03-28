#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    stack<int> stk;
    int idx = 0;

    // 将n的每一位保存到栈中
    while (n) {
        int tmp = n % 10;
        if (idx == 0) {
            stk.push(tmp);
        }

        n /= 10;
    }

    while (stk.size()) {
        int tmp = stk.top();

        if (stk.size() == 3) {
            for (int i = 0; i < tmp; ++i) {
                cout << 'B';
            }

        } else if (stk.size() == 2) {
            for (int i = 0; i < tmp; ++i)
                cout << 'S';
        } else {
            int tmp = stk.top();
            for (int i = 1; i <= tmp; ++i) {
                cout << i;
            }
        }

        stk.pop();
    }
    cout << endl;
    return 0;
}
