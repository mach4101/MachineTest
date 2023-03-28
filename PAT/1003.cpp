#include <iostream>
#include <vector>
using namespace std;

bool check1(string str) {
    // 构造字符串，push到vec数组中
    vector<string> vec;

    string match = "xPATx";
    


    for(int i = 0; i < match.size(); ++i) {
        if(match[i] == 'x') {
            
        }
    }
    
    
}

bool check2(string str) {
    // 判断str能否被 aPbTc 或者 aPbATca 匹配
}

int main() {
    string str;
    int n = 0;
    while (n--) {
        cin >> str;
        for (int i = 0; i < str.size(); ++i) {
            if (str[i] != 'P' && str[i] != 'A' && str[i] != 'T') {
                cout << "NO" << endl;
                continue;
            }

            if (check1(str) && check2(str)) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}