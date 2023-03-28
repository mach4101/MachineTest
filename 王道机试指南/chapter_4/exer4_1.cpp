#include <cmath>
#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    while (getline(cin, str)) {
        int sum = 0;
        for (int i = 0; i < str.size(); ++i) {
            sum += int(str[i] - '0') * (pow(2, str.size() - i) - 1);
        }
        cout << sum << endl;
    }

    return 0;
}