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

    int d = 0, t = 1e9;
    for (int i = 0; i < n - 2; i++) {
        int Max = max(v[i], v[i + 2]);

        if (Max < t) {
            t = Max;
            d = i + 1;
        }
    }
    cout << d << " " << t;
}
int main() {
    fastio();
    solve();
}
