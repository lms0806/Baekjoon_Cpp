#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int n;

    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    if (prev_permutation(v.begin(), v.end())) {
        for (auto a : v) {
            cout << a << " ";
        }
    }
    else {
        cout << -1;
    }
}

int main() {
    fastio();
    solve();
}
