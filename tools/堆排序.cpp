// 堆排序

#include <iostream>
#include <queue>

using namespace std;

const int N = 1100;
int a[N];

int main() {
    int n;
    cin >> n;
    priority_queue<int> pq;
    for (int i = 0; i < n; ++i) {
        int tmp;
        cin >> tmp;
        pq.push(tmp);
    }
    for (int i = 0; i < n; ++i) {
        int tmp = pq.top();
        pq.pop();
        a[n - 1 - i] = tmp;
    }
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;

    cout << endl;
    return 0;
}