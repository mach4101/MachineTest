// 写出这个数
#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;

    int sum = 0;
    for (int i = 0; i < str.size(); ++i) {
        sum += str[i] - '0';
    }

    string ans[10] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
    string sum_str = to_string(sum);

    for (int i = 0; i < sum_str.size() - 1; ++i) {
        cout << ans[sum_str[i] - '0'] << " ";
    }
    // 最后一个不输出空格，而是换行
    cout << ans[sum_str[sum_str.size() - 1] - '0'] << endl;

    return 0;
}