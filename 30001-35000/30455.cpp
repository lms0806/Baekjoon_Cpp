#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int n;

    cin >> n;

    cout << (n % 2 == 1 ? "Goose" : "Duck");
}

int main() {
    fastio();
    solve();
}
