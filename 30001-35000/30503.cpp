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

    int t;

    cin >> t;

    while (t--) {
        int choice, l, r;

        cin >> choice >> l >> r;

        if (choice == 1) {
            int k;

            cin >> k;

            int count = 0;
            for (int i = l - 1; i < r; i++) {
                if (v[i] == k) {
                    count++;
                }
            }

            cout << count << "\n";
        } else {
            for (int i = l - 1; i < r; i++) {
                v[i] = 0;
            }
        }
    }
}
int main() {
    fastio();
    solve();
}
