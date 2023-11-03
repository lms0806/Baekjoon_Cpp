#include<bits/stdc++.h>
#define ll long long

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int n;
    
    cin >> n;

    vector<ll> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    ll sum = 1, max = 1;
    for (int i = n - 2; i >= 0; i--) {
        max++;

        if (max > v[i]) {
            sum += v[i];
            max = v[i];
        }
        else {
            sum += max;
        }
    }
    cout << sum;
}
int main() {
    fastio();
    solve();
}
