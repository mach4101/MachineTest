// 高精除
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> div(vector<int>& A, int b, int& r) {
    r = 0;
    vector<int> C;
    for (int i = A.size() - 1; i >= 0; --i) {
        r = r * 10 + A[i];
        C.push_back(r / b);
        r = r % b;
    }

    reverse(C.begin(), C.end());

    while (C.size() > 1 && C.back() == 0)
        C.pop_back();
    return C;
}

int main() {
    string str;
    int b;
    cin >> str >> b;

    vector<int> A;

    for (int i = str.size() - 1; i >= 0; --i)
        A.push_back(str[i] - '0');

    int r = 0;
    vector<int> C = div(A, b, r);
    for (int i = C.size() - 1; i >= 0; --i)
        cout << C[i];
    cout << endl
         << r << endl;

    return 0;
}