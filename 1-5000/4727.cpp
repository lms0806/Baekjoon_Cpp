#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int a, b, c, d;

    while (cin >> a >> b >> c >> d && a + b + c + d) {
        int k = b * 9 + c * 4 + d * 4;
        double max = (b + 0.5) * 9 + (c + 0.5 + d + 0.5) * 4;
        double min = (b == 0 ? 0 : b - 0.5) * 9 + (c == 0 ? 0 : c - 0.5) * 4 + (d == 0 ? 0 : d - 0.5) * 4;

        cout << (min <= a && a <= max ? "yes" : "no") << "\n";
    }
}
int main() {
    fastio();
    solve();
}
