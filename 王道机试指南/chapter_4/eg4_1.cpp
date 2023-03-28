#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;
    while (cin >> str1 >> str2) {
        int sum = 0;
        for (int i = 0; i < str1.size(); ++i) {
            for (int j = 0; j < str2.size(); ++j) {
                sum += int(str1[i] - '0') * int(str2[j] - '0');
            }
        }

        cout << sum << endl;
    }

    return 0;
}