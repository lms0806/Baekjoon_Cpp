#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    string s;

    cin >> s;

    sort(s.begin(), s.end());

    cout << (s == "123" || s == "456" || s == "789" || s == "147" || s == "258" || s == "369" || s == "025" || s == "058" ? "Unlocked" : "Locked");
}
int main() {
    fastio();
    solve();
}
