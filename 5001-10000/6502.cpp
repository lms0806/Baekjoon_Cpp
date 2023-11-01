#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int t = 1;

    while (1) {
        double r, w, l;

        cin >> r;

        if (!r) {
            break;
        }

        cin >> w >> l;

        cout << "Pizza " << t++;
        if (r * r >= pow((w / 2), 2) + pow((l / 2), 2)) {
            cout << " fits on the table.";
        }
        else {
            cout << " does not fit on the table.";
        }
        cout << "\n";
    }
}
int main() {
    fastio();
    solve();
}
