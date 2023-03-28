#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1;
    string str2;
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < n; ++i) {
            cin >> str1[i];
        }

        cout << str1[0] << endl;

        for (int i = 0; i < m; ++i) {
            cin >> str2[i];
        }

        cout << str1 << endl
             << str2 << endl;

        int found = str1.find(str2);

        if (found != string::npos) {
            cout << found << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}