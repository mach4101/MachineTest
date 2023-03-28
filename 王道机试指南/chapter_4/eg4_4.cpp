// 设置一个number数组用于从字符到出现次数的映射

#include <algorithm>
#include <cstdio>

#include <cstring>
#include <iostream>
#include <string>
using namespace std;

int number[128];

int main() {
    string str1, str2;
    while (getline(cin, str1)) {
        if (str1 == "#") {
            break;
        }

        getline(cin, str2);

        memset(number, 0, sizeof(number));
        for (int i = 0; i < str2.size(); ++i) {
            number[str2[i]]++;
        }

        for (int i = 0; i < str1.size(); ++i) {
            cout << str1[i] << " " << number[str1[i]] << endl;
        }
    }

    return 0;
}