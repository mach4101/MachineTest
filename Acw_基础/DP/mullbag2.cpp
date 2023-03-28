#include <algorithm>
#include <iostream>

using namespace std;

int V[250000], W[250000];
int dp[250000];

int main() {
    int n, m, idx = 0;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        int v, w, s;
        cin >> v >> w >> s;

        for (int j = 1; j <= s; j *= 2) {
            s -= j;
            idx += 1;
            V[idx] = j * v;
            W[idx] = j * w;
        }

        if (s > 0) {
            idx++;
            V[idx] = s * v;
            W[idx] = s * w;
        }

        for (int i = 1; i <= idx; ++i) {
            for (int j = m; j >= V[i]; --j) {
                dp[j] = max(dp[j], dp[j - V[i]] + W[i]);
            }
        }
    }

    cout << dp[m] << endl;
}