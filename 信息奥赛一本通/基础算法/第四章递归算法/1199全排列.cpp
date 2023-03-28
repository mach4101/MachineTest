// 全排列
#include <iostream>
#include <string>
using namespace std;

char res[1010];
string str;
bool vis[1010];

void permutation(int step) {
    if (step == str.size()) {
        res[step] = '\0';
        cout << res << endl;
        return;
    }

    for (int i = 0; i < str.size(); ++i) {
        if (!vis[i]) {
            vis[i] = true;
            res[step] = str[i];
            permutation(step + 1);
            vis[i] = false;
        }
    }
}

int main() {
    cin >> str;
    permutation(0);

    return 0;
}