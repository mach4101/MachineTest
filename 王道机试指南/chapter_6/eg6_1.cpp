// 十进制转二进制

#include <iostream>
#include <vector>
using namespace std;

int main() {
    unsigned int num;

    while (cin >> num) {
        vector<int> vec;
        while (num) {
            vec.push_back(num % 2);
            num /= 2;
        }

        int flag = true;
        for (int i = vec.size() - 1; i >= 0; --i) {
            cout << vec[i];
        }
        cout << endl;
    }

    return 0;
}