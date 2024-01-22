#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int a, b, c, d;

    cin >> a >> b >> c >> d;

    cout << a + b + c + d - min(a, min(b, min(c, d))) + 1;
}
int main() {
    fastio();
    solve();
}
