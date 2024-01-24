#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int n, m, k;

    cin >> n >> m >> k;

    k -= m;
    cout << (n % k != 0) + n / k;
}
int main() {
    fastio();
    solve();
}
