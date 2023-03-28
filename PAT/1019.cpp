// 数字黑洞
#include <algorithm>
#include <iostream>

using namespace std;

int a[4];
int sort_rise(int n) {
    int i = 0;
    while (n) {
        a[i++] = n % 10;
        n /= 10;
    }

    sort(a, a + 4);
    return a[0] * 1000 + a[1] * 100 + a[2] * 10 + a[3];
}

int sort_down(int n) {
    int i = 0;
    while (n) {
        a[i++] = n % 10l;
        n /= 10;
    }

    sort(a, a + 4, greater<int>());
    return a[0] * 1000 + a[1] * 100 + a[2] * 10 + a[3];
}

int main() {
    int n;
    cin >> n;

    while (n != 6174) {
        int down = sort_down(n);
        int up = sort_rise(n);

        if (down == up) {
            cout << down << " - " << up << " = "
                 << "0000" << endl;
            break;
        }

        n = down - up;
        if (down < 1000)
            cout << "0" << down << " - " << up << " = " << n << endl;
        else if (up < 1000)
            cout << down << " - 0" << up << " = " << n << endl;
        else if (up < 1000 && down < 1000)
            cout << "0" << down << " - 0" << up << " = " << n << endl;
        else
            cout << down << " - " << up << " = " << n << endl;
    }

    return 0;
}