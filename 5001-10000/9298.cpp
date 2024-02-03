#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int t;

    cin >> t;

    for(int tc = 1; tc <= t; tc++) {
        int n;

        cin >> n;

        double minX = 20e9, maxX = -20e9, minY = 20e9, maxY = -20e9;
        while (n--) {
            double a, b;

            cin >> a >> b;

            minX = min(minX, a);
            maxX = max(maxX, a);
            minY = min(minY, b);
            maxY = max(maxY, b);
        }

        double w = maxX - minX, h = maxY - minY;

        cout.precision(10);
        cout << "Case " << tc << ": Area " << w * h << ", Perimeter " << w + w + h + h << "\n";
    }
}
int main() {
    fastio();
    solve();
}
