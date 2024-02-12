#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int n, sx, sy;

    cin >> n >> sx >> sy;

    double mn = 10e9;
    int ex = 0, ey = 0;
    vector<pair<double, double>> v;
    for (int i = 1; i < n; i++) {
        int x, y;

        cin >> x >> y;

        double dist = sqrt(pow(sx - x, 2) + pow(sy - y, 2));

        if (dist < mn) {
            mn = dist;
            ex = x;
            ey = y;
        }
    }

    printf("%d %d\n%d %d\n%0.2lf\n", sx, sy, ex, ey, mn);
}
int main() {
    fastio();
    solve();
}
