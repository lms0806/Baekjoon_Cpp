#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int t;

    cin >> t;

    while (t--) {
        int n, t, before = 0, count = 0;

        cin >> n;

        while (n--) {
            cin >> t;

            if (t - before >= 120) {
                count += (t - before) / 120;
            }
            before = t;
        }

        t = 1440;
        if (t - before >= 120) {
            count += (t - before) / 120;
        }

        cout << (count >= 2 ? "YES" : "NO") << "\n";
    }
}
int main() {
    fastio();
    solve();
}
