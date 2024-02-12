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

        vector<bool> check(n);
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++) {
            int x, y;

            cin >> x >> y;

            v.push_back({x, y});
        }

        cin >> n;

        while (n--) {
            int x, y;

            cin >> x >> y;

            for (int i = 0; i < check.size(); i++) {
                if (check[i]) {
                    continue;
                }

                if (x - 50 <= v[i].first && v[i].first <= x + 50) {
                    if (y - 50 <= v[i].second && v[i].second <= y + 50) {
                        check[i] = true;
                    }
                }
            }
        }

        int answer = 0;
        for (int i = 0; i < check.size(); i++) {
            if (check[i]) {
                answer++;
            }
        }
        cout << answer << "\n";
    }
    
}
int main() {
    fastio();
    solve();
}
