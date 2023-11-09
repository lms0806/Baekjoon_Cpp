#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int n;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (30 % (i + 1) == 0) {
            cout << i << "\n";
        }
    }
}
int main() {
    fastio();
    solve();
}
