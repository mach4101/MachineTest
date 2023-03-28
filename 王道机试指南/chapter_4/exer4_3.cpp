#include <iostream>
#include <string>
using namespace std;

// 判断是否是空格
bool is_space(char ch) {
    return (ch == ' ' || ch == '\t' || ch == '\r' || ch == '\n');
}

// 判断是否是字符
bool is_alpha(char ch) {
    return (ch >= 'a' && ch <= 'z');
}

int main() {
    string str;
    while (getline(cin, str)) {
        if (str.size() && (str[0] >= 'a' && str[0] <= 'z')) {
            str[0] = (char)(str[0] - 32);
        }

        // 如果前一位是空格，并且当前位是字符，那么就可以将其转换成大写
        for (int i = 1; i < str.size(); ++i) {
            if (is_space(str[i - 1]) && is_alpha(str[i])) {
                str[i] = (char)(str[i] - 32);
            }
        }
        cout << str << endl;
    }
    return 0;
}