#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int t;
    
    cin >> t;

    while (t--) {
        int n, k;

        cin >> n >> k;

        cout << (n - k) / (k - 1) << "\n";
    }
}
int main() {
    fastio();
    solve();
}
