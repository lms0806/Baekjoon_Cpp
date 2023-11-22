#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int n, k;

    cin >> n >> k;

    vector<int> v(n), num(n - 1);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    for (int i = 1; i < n; i++) {
        num[i - 1] = v[i] - v[i - 1];
    }

    sort(num.rbegin(), num.rend());

    int sum = 0;
    for (int i = k - 1; i < n - 1; i++) {
        sum += num[i];
    }
    cout << sum;
}
int main() {
    fastio();
    solve();
}
