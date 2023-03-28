// 字符处理
#include <iostream>
#include <string>
using namespace std;

bool check(char ch) {
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U';
}

int main() {
    string str;
    cin >> str;
    for (int i = 0; i < str.size() - 1; ++i) {
        // 如果是元音
        if (check(str[i])) {
            str.erase(i, 1);
            i--;
        } else {  // 如果是辅音
            if (str[i] >= 'A' && str[i] <= 'Z')
                str[i] = str[i] - 'A' + 'a';
            else if (str[i] >= 'a' && str[i] <= 'z')
                str[i] = str[i] - 'a' + 'A';
            str.insert(i, 1, '.');
            i++;
        }
    }

    cout << str << endl;

    return 0;
}