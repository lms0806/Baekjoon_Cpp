#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int h, l, a, b;

    cin >> h >> l >> a >> b;

    cout << ((h << 1 >= a && l >= b) || (h << 1 >= b && l >= a) ? "YES" : "NO");
}
int main() {
    fastio();
    solve();
}
