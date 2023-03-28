#include <iostream>
using namespace std;

bool findseven(int num) {
    while (num) {
        if ((num = num % 10) == 7) {
            return true;
        }
        num /= 10;
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    int sum = 0;

    for (int i = 0; i <= n; ++i) {
        if (!(i % 7 == 0 || findseven(i))) {
            sum += i * i;
        }
    }

    cout << sum << endl;
    return 0;
}