#include<iostream>
#include<algorithm>
using namespace std;

int a[205];

int main() {
    int n;
    while(cin >> n) {
        for(int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        int target;
        cin >> target;

        bool flag = true;
        for(int i = 0; i < n; ++i) {
            if(a[i] == target) {
                cout << i << endl;
                flag = false;
            }
        }

        if(flag) cout << -1 << endl;
    }

    return 0;
}