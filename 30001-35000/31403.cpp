#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int c;
    string a, b;

    cin >> a >> b >> c;

    cout << stoi(a) + stoi(b) - c << "\n" << stoi(a + b) - c;
}
int main() {
    fastio();
    solve();
}
