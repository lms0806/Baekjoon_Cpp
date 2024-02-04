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

    int a = 0, b = 0;
    for (int i = 1; i < n; i++) {
        if (v[i] < v[i - 1]) {
            a += v[i - 1] - v[i];
        }
        else {
            b += v[i] - v[i - 1];
        }
    }
    cout << a << " " << b;
}
int main() {
    fastio();
    solve();
}
