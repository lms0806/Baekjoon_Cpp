#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int n;

    cin >> n;

    int sum = 0;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        sum += v[i];
    }

    sum /= 2;

    for (int i = 1; i < n; i += 2) {
        sum -= v[i];
    }
    
    cout << sum << "\n";

    for (int i = 0; i < n - 1; i++) {
        sum = v[i] - sum;

        cout << sum << "\n";
    }
}
int main() {
    fastio();
    solve();
}
