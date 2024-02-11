#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int t;

    cin >> t;

    while (t--) {
        int n;

        cin >> n;

        int min = 1e9;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int cnt = 1;
        while (1) {
            set<int> remain;

            for (int i = 0; i < n; i++) {
                int num = v[i] % cnt;

                if (remain.count(num)) {
                    break;
                }

                remain.insert(num);
            }

            if (remain.size() == n) {
                cout << cnt << "\n";
                break;
            }

            cnt++;
        }
    }
}
int main() {
    fastio();
    solve();
}
