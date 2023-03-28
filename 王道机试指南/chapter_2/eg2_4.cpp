#include <iostream>
using namespace std;

int main() {
    int h;
    cin >> h;

    // 纯找规律推倒
    for (int i = h; i > 0; --i) {
        for (int j = 0; j < (i - 1) * 2; ++j) {
            cout << " ";
        }

        for (int j = 0; j < h + (h - i) * 2; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}