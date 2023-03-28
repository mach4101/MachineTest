#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    while (getline(cin, str)) {
        if (str == "ENDOFINPUT") {
            break;
        }

        getline(cin, str);  // 明文

        for (int i = 0; i < str.size(); ++i) {
            if (str[i] >= 'A' && str[i] <= 'Z') {
                // CPP的负数取余有点bug，所以需要鬼畜一下
                str[i] = (((str[i] - 'A' - 5) + 26) % 26) + 'A';
            }
        }

        cout << str << endl;

        getline(cin, str);  // 结束行
    }

    return 0;
}