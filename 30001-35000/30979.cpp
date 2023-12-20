#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int t, n, f = 0;

    cin >> t >> n;

    for (int i = 0; i < n; i++) {
        int num;

        cin >> num;

        f += num;
    }

    cout << "Padaeng_i " << (t <= f ? "Happy" : "Cry");
}
int main() {
    fastio();
    solve();
}
