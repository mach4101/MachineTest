// 修路看书

#include <iostream>
using namespace std;

bool vis[10005];

int main() {
    int L;
    int n;
    cin >> L;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int start, end;
        cin >> start >> end;

        for (int j = start; j <= end; ++j) {
            vis[j] = true;
        }
    }

    int count = 0;
    for (int i = 0; i <= L; ++i) {
        if (!vis[i])
            count++;
    }

    cout << count << endl;

    return 0;
}