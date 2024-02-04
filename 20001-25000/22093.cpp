#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int t;

    cin >> t;

    while (t--) {
        int n, a, b;

        cin >> n >> a >> b;

        cout << max(a - b, 0) << " " << min(n - b, a) << "\n";
    }
}
int main() {
    fastio();
    solve();
}
