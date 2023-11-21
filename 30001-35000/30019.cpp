#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int n, m;

    cin >> n >> m;

    vector<int> v(n + 1);
    while (m--) {
        int k, s, e;

        cin >> k >> s >> e;

        if (v[k] <= s) {
            cout << "YES";
            v[k] = e;
        }
        else {
            cout << "NO";
        }
        cout << "\n";
    }
}
int main() {
    fastio();
    solve();
}
