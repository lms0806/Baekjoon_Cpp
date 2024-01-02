#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int n, m, k;

    cin >> n >> m >> k;

    int num = 0;
    for (int i = 1; i <= m; i++) {
        int t, r;

        cin >> t >> r;

        num += r;

        if (num > k) {
            cout << i << " " << 1;
            return;
        }
    }

    cout << -1;
}
int main() {
    fastio();
    solve();
}
