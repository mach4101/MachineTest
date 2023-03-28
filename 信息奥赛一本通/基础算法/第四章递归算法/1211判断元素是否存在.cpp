// 判断元素是否存在

#include <iostream>
using namespace std;

bool check(unsigned k, int x) {
    if (k > x)
        return false;
    else if (k == x)
        return true;
    else
        return check(2 * k + 1, x) || check(3 * k + 1, x);
}

int main() {
    unsigned int k;
    int x;
    scanf("%d,%d", &k, &x);

    if (check(k, x)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}