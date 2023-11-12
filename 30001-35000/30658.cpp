#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    while (1) {
        int n;

        cin >> n;

        if (n == 0) {
            break;
        }

        vector<int> v(n);
        for (int i = n - 1; i >= 0; i--) {
            cin >> v[i];
        }

        for (auto a : v) {
            cout << a << '\n';
        }
        cout << "0\n";
    }
}
int main() {
    fastio();
    solve();
}
