#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int t;

    cin >> t;

    while (t--) {
        string s;

        cin >> s;

        if (s.find('S') != string::npos) {
            cout << s;
            break;
        }
    }
}
int main() {
    fastio();
    solve();
}
