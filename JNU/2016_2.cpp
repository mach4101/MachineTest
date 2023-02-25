#include<iostream>
#include<algorithm>
using namespace std;
int score[1000];
int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> score[i];
    }
    int m;
    cin >> m;

    sort(score, score + n);

    cout << score[m - 1] << endl;

    return 0;
}