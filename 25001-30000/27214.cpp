#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int k, w, h, t;

    cin >> k >> w >> h >> t;

    for (int j = 0; j < h; j++) {
        for (int i = 0; i < t; i++) {
            cout << string((t + k) * w + t, '*') << "\n";
        }
        for (int i = 0; i < k; i++) {
            for (int l = 0; l < w; l++) {
                cout << string(t, '*') << string(k, '.');
            }
            cout << string(t, '*') << "\n";
        }
    }
    for (int i = 0; i < t; i++) {
        cout << string((t + k) * w + t, '*') << "\n";
    }
}
int main() {
    fastio();
    solve();
}
