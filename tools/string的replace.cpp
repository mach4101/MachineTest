// replace
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;

    int pos, len;
    cin >> pos >> len;

    string str2;
    cin >> str2;

    // replace的第一个参数是起点，第二个参数是被替换的原串的长度
    // 第三个参数是子串
    str.replace(1, 2, str2);
    cout << str << endl;

    return 0;
}