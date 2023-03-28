// 进制转换
#include <iostream>
#include <string>
using namespace std;

char table[17] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

string d216(int n) {
    string str = "";
    while (n) {
        str += table[n % 16];
        n /= 16;
    }
    for (int i = 0; i < str.length() / 2; ++i) {
        swap(str[i], str[str.length() - i - 1]);
    }
    return str;
}

int main() {
    int n;
    cin >> n;
    string str = d216(n);
    cout << str << endl;
    return 0;
}