#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int n;

    cin >> n;

    int a = 1e9, b = 1e9;
    while (n--) {
        int x, y;

        cin >> x >> y;

        if (y < b) {
            a = x;
            b = y;
        }
    }

    cout << a << " " << b;
}
int main() {
    fastio();
    solve();
}
