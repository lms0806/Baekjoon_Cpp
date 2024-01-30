#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int n;

    while (cin >> n) {
        vector<int> v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        reverse(v.begin(), v.end());

        bool check = true;
        for (int i = 2; i < n; i++) {
            if (v[i] - v[i - 1] != v[1] - v[0]) {
                cout << n - i + 1;
                check = false;
                break;
            }
        }

        if (check) {
            cout << 1;
        }
        cout << "\n";
    }
}
int main() {
    fastio();
    solve();
}
