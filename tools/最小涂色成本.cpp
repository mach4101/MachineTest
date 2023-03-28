// 最小涂色成本
#include<iostream>
using namespace std;

int dp[10100][3];
int map[11000][3];

int main(){ 
    int n;
    cin >> n;
    for(int i = 1; i <= n; ++i) {
        cin >> map[i][0] >> map[i][1] >> map[i][2];
    }

    for(int i = 1; i <= n; ++i) {
        dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]) + map[i][0];
        dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]) + map[i][1];
        dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]) + map[i][2];
    }

    cout << min(dp[n][0], min(dp[n][1], dp[n][2])) << endl;


    return 0;
}