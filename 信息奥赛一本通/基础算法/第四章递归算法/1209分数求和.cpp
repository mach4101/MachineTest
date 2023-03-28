// 分数求和
#include <cstdio>
#include <iostream>
using namespace std;

// 最大公约数
int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main() {
    int n;
    cin >> n;

    int sum_son = 0, sum_mother = 1;
    
    for (int i = 0; i < n; ++i) {
        int son, mother;
        scanf("%d/%d", &son, &mother);

        sum_son = mother * sum_son + sum_mother * son;
        sum_mother = sum_mother * mother;

        int gcd_ = gcd(sum_son, sum_mother);
        sum_son /= gcd_;
        sum_mother /= gcd_;
    }

    if (sum_mother == 1)
        cout << sum_son;
    else
        cout << sum_son << "/" << sum_mother << endl;

    return 0;
}