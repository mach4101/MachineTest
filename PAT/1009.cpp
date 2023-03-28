// 说反话

#include <algorithm>
#include <iostream>
#include <stack>

using namespace std;

int main() {
    char ch;
    string str;

    stack<string> stk;

    getline(cin, str);

    string tmp;
    for (int i = 0; i < str.size(); ++i) {
        if (str[i] != ' ') {
            tmp += str[i];
        } else {
            stk.push(tmp);
            tmp = "";
        }

        if (i == str.size() - 1) {
            stk.push(tmp);
        }
    }

    while (stk.size()) {
        cout << stk.top();
        if (stk.size() != 1)
            cout << " ";
        else
            cout << endl;
        stk.pop();
    }

    return 0;
}