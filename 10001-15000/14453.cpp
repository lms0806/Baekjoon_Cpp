#include<bits/stdc++.h>

using namespace std;

int dp[100001][3];

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int n;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        char c;

        cin >> c;

        for (int j = 0; j < 3; j++) {
            dp[i][j] = dp[i - 1][j];
        }

        if (c == 'P') {
            dp[i][0] = dp[i - 1][0] + 1;
        }
        else if (c == 'H') {
            dp[i][1] = dp[i - 1][1] + 1;
        }
        else {
            dp[i][2] = dp[i - 1][2] + 1;
        }
    }

    int answer = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 1; k <= n; k++) {
                answer = max(answer, dp[k][i] + dp[n][j] - dp[k][j]);
            }
        }
    }
    cout << answer;
}
int main() {
    fastio();
    solve();
}
