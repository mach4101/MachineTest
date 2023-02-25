// 字符统计
#include <iostream>
using namespace std;

char str[1005];
int main() {
    int idx = 0;
    char ch;
    while ((ch = getchar()) != '.') {
        str[idx++] = ch;
    }

    int atcount = 0, newlinecount = 0;

    for (int i = 0; i < idx; ++i) {
        if (str[i] == 'a' && str[i + 1] == 't') {
            atcount++;
        }
        if (str[i] == '\n')
            newlinecount++;
    }

    cout << newlinecount << " " << atcount << endl;
    return 0;
}