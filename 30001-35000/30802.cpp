#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int n;

    cin >> n;

    vector<int> v(6);
    for (int i = 0; i < 6; i++) {
        cin >> v[i];
    }

    int t, p;

    cin >> t >> p;

    int sum = 0;
    for (auto a : v) {
        sum += (a / t) + (a % t != 0 ? 1 : 0);
    }

    cout << sum << "\n" << n / p << " " << n % p;
}
int main() {
    fastio();
    solve();
}
