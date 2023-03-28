// 十进制与二进制
// 仍需要实现大数版

#include <cmath>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> vec;

    while (n) {
        vec.push_back(n % 2);
        n /= 2;
    }

    int versum = 0;
    for (int i = 0; i < vec.size(); ++i) {
        versum += vec[i] * pow(2, vec.size() - i - 1);
    }

    cout << versum << endl;

    return 0;
}