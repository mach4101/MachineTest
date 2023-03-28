#include<iostream>
#include<string>
using namespace std;

int number[26];

int main () {
    string str;

    while(getline(cin, str)) {
        for(int i = 0; i < str.size(); ++i) {
            if(str[i] >= 'A' && str[i] <= 'Z') {
                number[str[i] - 'A'] ++;
            }
        }

        for(int i = 0; i < 26; ++i) {
            cout << (char)('A' + i) << ":" << number[i] << endl;
        }
    }

    return 0;
}