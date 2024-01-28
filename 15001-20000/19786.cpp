#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

int solve(int a, int c, int r, int g, int b) {
    return a * (r * r + g * g + b * b) + c * min(r, min(g, b));
}

void solve() {
    int t;

    cin >> t;

    while (t--) {
        int a, c, r, g, b;

        cin >> a >> c >> r >> g >> b;

        int red = solve(a, c, r + 1, g, b), green = solve(a, c, r, g + 1, b), blue = solve(a, c, r, g, b + 1);

        if (red >= green && red >= blue) {
            cout << "RED";
        }
        else if (green >= red && green >= blue) {
            cout << "GREEN";
        }
        else {
            cout << "BLUE";
        }
        cout << "\n";
    }
}
int main() {
    fastio();
    solve();
}
