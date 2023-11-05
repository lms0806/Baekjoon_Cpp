#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int s, d, i, l, n;

    cin >> s >> d >> i >> l >> n;

    cout << max((n * 4 - s - d - i - l), 0);
}

int main() {
    fastio();
    solve();
}
