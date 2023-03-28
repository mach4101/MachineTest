// 汉诺塔问题
#include<iostream>
using namespace std;

void hanoi(int n, char A, char C, char B) {
    if(n == 0) return;
    hanoi(n - 1, A, B, C);
    cout << A << "->" << n << "->" << B << endl;
    hanoi(n - 1, C, A, B);
}

int main() {
    int n;
    cin >> n;

    char A, B, C;
    cin >> A >> B >> C;

    hanoi(n, A, C, B);



    return 0;
}