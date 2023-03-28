// substr一个参数表示，从这个位置开始到结束位置的子串
// substr两个参数表示：第一个参数是开始位置，第二个参数是子串的元素个数

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string a[10005];
// 后缀字符串排序
int main() {
    string str;
    getline(cin, str);

    for(int i = 0; i < str.size(); ++i) {
        a[i] = str.substr(i);
    }

    sort(a, a + str.size());
    
    for(int i = 0; i < str.size(); ++i) {
        cout << a[i] << endl;
    }

    return 0;
}