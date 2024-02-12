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

        char c;
        int sx = 0, sy = 0;
        double mn = 10e9;
        vector<pair<double, double>> v;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> c;

                if (c == 's') {
                    sx = i;
                    sy = j;
                }
                else if (c == 'p') {
                    v.push_back({ i, j });
                }
            }
        }

        int x = 0, y = 0;
        for (auto a : v) {
            double dist = sqrt(pow(sx - a.first, 2) + pow(sy - a.second, 2));

            if (dist < mn) {
                mn = dist;
                x = a.first;
                y = a.second;
            }
        }

        printf("(%d,%d):(%d,%d):%0.2lf\n", sx, sy, x, y, mn);
    }
}
int main() {
    fastio();
    solve();
}
