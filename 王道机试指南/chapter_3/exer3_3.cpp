#include<iostream>
#include<algorithm>

using namespace std;

typedef struct rat {
    int kil;
    string color;
} rat;

rat a[105];

bool cmp(rat rat1, rat rat2) {
    return rat1.kil > rat2.kil;
}

int main() {
    int n;
    while(cin >> n) {
        for(int i = 0; i < n; ++i) {
            cin >> a[i].kil >> a[i].color;
        }

        sort(a, a + n, cmp);

        for(int i = 0; i < n; ++i) {
            cout << a[i].color << endl;
        }
    }

    return 0;
}