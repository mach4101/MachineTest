// 个位数统计

#include <iostream>
#include <map>
#include <string>
using namespace std;

int num[10];

int main() {
    string str;
    cin >> str;

    for (int i = 0; i < str.size(); ++i) {
        num[str[i] - '0']++;
    }

    for (int i = 0; i < 10; ++i) {
        if (num[i] > 0) {
            cout << i << ":" << num[i] << endl;
        }
    }

    return 0;
}