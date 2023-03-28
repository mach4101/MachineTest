// 括号匹配问题  ---> 未写完
#include<iostream>
#include<string>
#include<cstring>
using namespace std;

const int N = 110;
int left_pos[N];
int right_pos[N];

int main() {
    string str;
    while(cin >> str) {
        memset(left_pos, 0, sizeof left_pos);
        memset(right_pos, 0, sizeof right_pos);
        int ldx = 0, rdx = 0;
        
        cout << str << endl;
        for(int i = 0; i < str.size(); ++i) {
            
        }




    }

    return 0;
}