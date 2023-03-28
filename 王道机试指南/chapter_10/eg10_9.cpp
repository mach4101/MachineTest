#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    string str;
    while (cin >> str) {
        map<string, int> mp;
        for (int i = 0; i < str.size(); ++i) {
            for (int j = 1; j <= str.size() - i; j++) {
                mp[str.substr(i, j)]++;
            }
        }

        map<string, int>::iterator it;
        for (it = mp.begin(); it != mp.end(); ++it) {
            if (it->second > 1) {
                cout << it->first << " " << it->second << endl;
            }
        }
    }

    return 0;
}