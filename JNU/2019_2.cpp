#include<iostream>
#include<stack>
using namespace std;

int main() {
    stack<int> stk;
    string str;
    cin >> str;

    int len = str.length();

    for(int i = 0; i < len / 2; ++i) {
        if(str[i] != str[len - i - 1]) {
            cout <<"No!" << endl;
            return 0;
        }
    }
    cout <<"Yes!" << endl;

    return 0;
}