// 堆栈的使用

#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    int n;
    while (cin >> n) {
        stack<int> stk;
        for (int i = 0; i < n; ++i) {
            char ch;
            cin >> ch;
            if (ch == 'A') {
                if (stk.size()) {
                    cout << stk.top() << endl;
                } else {
                    cout << 'E' << endl;
                }
            } else if (ch == 'P') {
                int tmp;
                cin >> tmp;
                stk.push(tmp);
            } else {
                if (stk.size()) {
                    stk.pop();
                }
            }
        }
    }

    return 0;
}