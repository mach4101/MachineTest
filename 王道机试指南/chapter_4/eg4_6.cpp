#include <iostream>
#include <string>
using namespace std;

string str;
char a[10005], b[1000005];

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        for (int i = 0; i < m; ++i) {
            cin >> b[i];
        }

        int start = -1;
        for (int i = 0; i < n; ++i) {
            bool flag = true;
            int idx = i;
            for (int j = 0; j < m; ++j) {
                if (a[idx++] != b[j]) {
                    flag = false;
                    break;
                }
            }

            if (flag && start == -1) {
                start = i;
            }
        }

        cout << start + 1 << endl;
    }

    return 0;
}