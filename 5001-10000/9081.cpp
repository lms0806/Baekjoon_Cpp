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

        vector<char> v(s.size());
        for (int i = 0; i < s.size(); i++) {
            v[i] = s[i];
        }

        if (!next_permutation(v.begin(), v.end())) {
            prev_permutation(v.begin(), v.end());
        }

        for (auto a : v) {
            cout << a;
        }
        cout << "\n";
    }
}

int main() {
    fastio();
    solve();
}
