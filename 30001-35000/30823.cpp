#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int n, k;
    string s;

    cin >> n >> k >> s;

    if ((n - k) % 2 == 0) {
        cout << s.substr(k - 1);
        reverse(s.begin(), s.begin() + k - 1);
        cout << s.substr(0, k - 1);
    }
    else {
        cout << s.substr(k - 1) <<  s.substr(0, k - 1);
    }
}
int main() {
    fastio();
    solve();
}
