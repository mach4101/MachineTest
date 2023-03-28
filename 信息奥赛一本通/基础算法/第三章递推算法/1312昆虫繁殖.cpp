#include <iostream>
using namespace std;

// 成虫过x个月产卵y对，然后卵需要两个月长大成虫，虫一个月内不能生仔

long long luan[60];
long long chong[60];

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    for (int i = 1; i <= x; ++i) {
        chong[i] = 1;
    }

    for (int i = x + 1; i <= z + 1; ++i) {
        luan[i] = chong[i - x] * y;
        chong[i] = chong[i - 1] + luan[i - 2];
    }

    cout << chong[z + 1] << endl;

    return 0;
}