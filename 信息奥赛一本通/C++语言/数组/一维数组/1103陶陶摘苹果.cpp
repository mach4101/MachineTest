// 摘苹果
#include<iostream>
using namespace std;

int apple[14];

int main() {
    int taotao;
    for(int i = 1; i <= 10; ++i){ 
        cin >> apple[i];
    }

    cin >> taotao;

    int cnt = 0;

    for(int i = 1; i <= 10; ++i) {
        if(taotao + 30 >= apple[i]) cnt++;
    }
    cout << cnt << endl;
    return 0;
}