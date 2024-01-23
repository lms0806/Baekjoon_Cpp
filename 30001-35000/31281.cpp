#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    long long a, b, c;

    cin >> a >> b >> c;

    cout << a + b + c - min(a, min(b, c)) - max(a, max(b, c));
}
int main() {
    fastio();
    solve();
}
