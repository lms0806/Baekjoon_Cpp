#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int t;

    cin >> t;

    while (t--) {
        int a, b, x, y;

        cin >> a >> b >> x >> y;

        int timeb = b * y;
        int remain = x - timeb / a;
        if (a * x <= b * y) {
            cout << b * y;
        }
        else if (remain % 2) {
            cout << (x - (remain >> 1)) * a;
        }
        else {
            cout << timeb + (remain >> 1) * a;
        }
        cout << "\n";
    }
}
int main() {
    fastio();
    solve();
}
