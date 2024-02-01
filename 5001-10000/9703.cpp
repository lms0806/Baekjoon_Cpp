#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int t;

    cin >> t;

    for (int tc = 1; tc <= t; tc++) {
        int n;

        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        bool flag = true;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                for (int k = j + 1; k < n; k++) {
                    if (v[i] + v[k] == v[j] * 2) {
                        flag = false;
                        break;
                    }
                }

                if (!flag) {
                    break;
                }
            }

            if (!flag) {
                break;
            }
        }

        cout << "Case #" << tc << ": " << (flag ? "YES" : "NO") << "\n";
    }
}
int main() {
    fastio();
    solve();
}
