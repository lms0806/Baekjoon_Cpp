#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int n, r;

    cin >> n >> r;

    double sum = 0;
    vector<double> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];

        sum += v[i];
    }

    cout << fixed;
    cout.precision(10);
    for (double a : v) {
        cout << r * r * 3.14159265358979 * a / sum << "\n";
    }
}
int main() {
    fastio();
    solve();
}
