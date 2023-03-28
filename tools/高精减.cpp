// 高精减
#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool compare(vector<int>& A, vector<int>& B) {
    if (A.size() != B.size())
        return A.size() > B.size();
    else {
        for (int i = A.size() - 1; i >= 0; --i) {
            if (A[i] != B[i])
                return A[i] > B[i];
        }
    }
    return true;
}

vector<int> sub(vector<int>& A, vector<int>& B) {
    vector<int> C;
    int t = 0;

    for (int i = 0; i < A.size(); ++i) {
        t = A[i] - t;
        if (i < B.size())
            t -= B[i];
        C.push_back((t + 10) % 10);
        if (t < 0)
            t = 1;
        else
            t = 0;
    }

    while (C.size() > 1 && C.back() == 0)
        C.pop_back();
    return C;
}

int main() {
    string str1, str2;
    cin >> str1 >> str2;

    vector<int> A, B;

    for (int i = str1.size() - 1; i >= 0; --i)
        A.push_back(str1[i] - '0');

    for (int i = str2.size() - 1; i >= 0; --i)
        B.push_back(str2[i] - '0');

    if (compare(A, B)) {
        vector<int> C = sub(A, B);
        for (int i = C.size() - 1; i >= 0; --i) {
            cout << C[i];
        }
        cout << endl;
    } else {
        vector<int> C = sub(B, A);
        cout << "-";
        for (int i = C.size() - 1; i >= 0; --i) {
            cout << C[i];
        }
        cout << endl;
    }

    return 0;
}