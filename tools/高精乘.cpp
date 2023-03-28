// 高精乘法
#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> mul(vector<int>& A, int b) {
    int t = 0;
    vector<int> C;

    for (int i = 0; i < A.size(); ++i) {
        t += A[i] * b;
        C.push_back(t % 10);
        t /= 10;
    }
    if (t)
        C.push_back(t);
    while (C.size() > 1 && C.back() == 0)
        C.pop_back();
    return C;
}

int main() {
    string str;
    int b;

    vector<int> A;
    cin >> str >> b;
    for (int i = str.size() - 1; i >= 0; --i)
        A.push_back(str[i] - '0');

    vector<int> C = mul(A, b);

    for (int i = C.size() - 1; i >= 0; --i) {
        cout << C[i];
    }
    cout << endl;

    return 0;
}