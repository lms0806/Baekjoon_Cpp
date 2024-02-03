#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int a, b, c, d;

    while (cin >> a >> b >> c >> d && (a || b || c || d)) {
        a *= 9;
        b *= 9;
        c *= 9;
        d *= 9;

        cout << 720 + 360 + (a - b + 360) % 360 + (c - b + 360) % 360 + (c - d + 360) % 360 << "\n";
    }
}
int main() {
    fastio();
    solve();
}
