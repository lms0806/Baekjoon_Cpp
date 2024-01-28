#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int t;

    cin >> t;

    int n = 1;
    string s = "00";
    while (t--) {
        cout << n << s << "\n";
        n <<= 1;
        if (to_string(n).length() > s.length()) {
            n = (n - n % 10 + 10) / 10;
            s += "0";
        }
    }
}
int main() {
    fastio();
    solve();
}
