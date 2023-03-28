// stack中存下标，只有左括号才需要进站，右括号不需要

#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string str;

    while (cin >> str) {
        stack<int> stk;
        string answer(str.size(), ' ');

        for (int i = 0; i < str.size(); ++i) {
            if (str[i] == '(') {
                stk.push(i);
            } else if (str[i] == ')') {
                if (stk.size() != 0) {
                    // 可以匹配
                    stk.pop();
                } else {
                    // 不能匹配
                    answer[i] = '?';
                }
            }
        }

        // 处理不能匹配的左括号
        while (stk.size()) {
            answer[stk.top()] = '$';
            stk.pop();
        }

        cout << str << endl;
        cout << answer << endl;
    }

    return 0;
}