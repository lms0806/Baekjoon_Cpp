#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    string a, b;

    cin >> a >> b;

    int s = stoi(a.substr(0, a.find(":"))) * 60 + stoi(a.substr(a.find(":") + 1));
    int e = stoi(b.substr(0, b.find(":"))) * 60 + stoi(b.substr(b.find(":") + 1)) + 24 * 60;

    e -= s;

    printf("%02d:%02d", e / 60, e % 60);
}
int main() {
    fastio();
    solve();
}
