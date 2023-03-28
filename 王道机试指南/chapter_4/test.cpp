// 使用cpp的接口，但是wa版本

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1(10005, '0');
    string str2(1000005, '0');

    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < n; ++i) {
            cin >> str1[i];
        }

        for (int i = 0; i < m; ++i) {
            cin >> str2[i];
        }
        str2 = str2.substr(0, m);
        int found = str1.find(str2);

        if (found != string::npos) {
            cout << found + 1 << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}