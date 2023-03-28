// 锤子剪刀布

#include <iostream>
#include <vector>
using namespace std;

vector<char> vec1, vec2;

// 返回1表示平局，返回2表示
int win(char ch1, char ch2) {
    if (ch1 == ch2)
        return 1;
}

int record[26];

int main() {
    int n;
    cin >> n;

    int count_jia_win = 0, count_jia_pin = 0, count_jia_lose = 0;

    for (int i = 0; i < n; ++i) {
        char ch1, ch2;
        cin >> ch1 >> ch2;
        vec1.push_back(ch1);
        vec2.push_back(ch2);

        if (win(ch1, ch2) == 1) {
            count_jia_pin++;
        } else if (win(ch1, ch2) == 2) {
            count_jia_win++;
        } else {
            count_jia_lose++;
        }
    }

    return 0;
}