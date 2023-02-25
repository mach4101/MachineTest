#include <algorithm>
#include <iostream>
using namespace std;

int score[100];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> score[i];
    }

    int m;
    cin >> m;
    // 排序后去重复
    sort(score, score + n, greater<int>());

    int j = 0;
    for (int i = 0; i < n; ++i) {
        if (score[i] != score[i + 1]) {
            score[j++] = score[i];
        }
    }
    cout << score[m - 1];
    return 0;
}