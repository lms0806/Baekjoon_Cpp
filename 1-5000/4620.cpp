#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int n;

    char arr[36][36];
    ll dp[36][36];

    while (1) {
        cin >> n;

        if (n == -1) {
            break;
        }

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                cin >> arr[i][j];
                arr[i][j] -= '0';
                dp[i][j] = 0;
            }
        }

        dp[1][1] = 1;

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if ((i == n && j == n) || dp[i][j] == 0) {
                    continue;
                }

                int d = i + arr[i][j], r = j + arr[i][j];

                if (d <= n) {
                    dp[d][j] += dp[i][j];
                }
                if (r <= n) {
                    dp[i][r] += dp[i][j];
                }
            }
        }

        cout << dp[n][n] << "\n";
    }
}
int main() {
    fastio();
    solve();
}
