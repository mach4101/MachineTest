#include <iostream>
using namespace std;

int main() {
    long long int a, b;
    int da, db;
    cin >> a >> da >> b >> db;

    int pa = 0, pb = 0;

    int base = 1;
    while (a) {
        if (a % 10 == da) {
            pa += base * da;
            base *= 10;
        }
        a /= 10;
    }

    base = 1;

    while (b) {
        if (b % 10 == db) {
            pb += base * db;
            base *= 10;
        }
        b /= 10;
    }

    cout << pa + pb << endl;

    return 0;
}