#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int n, m;

    cin >> n >> m;

    int zero = 0, one = 0;
    for (int i = 0; i < n; i++) {
        string s;

        cin >> s;

        for (int j = 0; j < s.size(); j++) {
            if (s[j] == '0') {
                zero++;
            }
            else {
                one++;
            }
        }
    }

    cout << min(zero, one);
}
int main() {
    fastio();
    solve();
}
