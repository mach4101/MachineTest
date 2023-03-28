#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    while (getline(cin, str)) {
        for (int i = 0; i < str.size(); ++i) {
            if (str[i] == 'z' || str[i] == 'Z') {
                str[i] -= 25;
            }
            if ((str[i] >= 'a' && str[i] < 'z') || (str[i] >= 'A' && str[i] < 'Z'))
                str[i]++;
        }
        cout << str << endl;
    }
    return 0;
}