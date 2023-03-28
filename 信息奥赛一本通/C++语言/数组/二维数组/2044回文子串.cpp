// 回文子串
#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cin >> str;
    for (int i = 0; i < (str.length() - 1) / 2; ++i) {
        if (str[i] != str[str.length() - i - 2]) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}