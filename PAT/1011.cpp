// A+B和c

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int i = 1;
    while (n--) {
        long long A, B, C;
        cin >> A >> B >> C;
        if (A + B > C) {
            cout << "Case "
                 << "#" << i << ": true" << endl;
        } else {
            cout << "Case "
                 << "#" << i << ": false" << endl;
        }
        i++;
    }

    return 0;
}