#include<iostream>
using namespace std;

int fac(int n) {
    if(n == 0) return 1;
    else return fac(n - 1) * n;

}

int main() {
    int n;
    cin >> n;
    cout << fac(n) << endl;

    return 0;
}