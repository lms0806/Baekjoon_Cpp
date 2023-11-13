#include<bits/stdc++.h>

typedef long long ll;

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    while (1) {
        int n, m;

        cin >> n >> m;

        if (!n && !m) {
            break;
        }

        vector<bool> v(n + 1);

        v[m] = true;
        for (int i = 2; i < n; i++) {
            int num;

            cin >> num;

            v[num] = true;
        }

        for (int i = 1; i <= n; i++) {
            if (!v[i]) {
                cout << i << "\n";
                break;
            }
        }
    }
}
int main() {
    fastio();
    solve();
}
