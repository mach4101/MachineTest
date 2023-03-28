// 2的幂次方

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int nums[16];

void output(int n) {
    // 将n分解成2的多少次方之和
    if(n == 0) {
        cout << 0;
    }

    int remain = n;
    while(remain > 0) {
        int i = 0;
        for(i = 15; nums[i] > remain; i --) ;
        
        remain -= nums[i];

        if(nums[i] != 2) {
            cout << "2(";
            output(i);
            cout <<")";
        } else {
            cout << "2";
        }

        if(remain != 0) {
            cout << "+";
        }
    }
}

int main() {
    int n;
    cin >> n;

    nums[0] = 1;
    for(int i = 1; i < 16; ++i) {
        nums[i] = 2 * nums[i - 1];
    }

    output(n);

    return 0;
}