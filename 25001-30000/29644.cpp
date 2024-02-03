#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int a, b;

    cin >> a >> b;

    int size = b >> 1;
    for (int i = 1; i < size; i++) {
        if ((size - i) * i == a) {
            cout << size - i << " " << i;
            return;
        }
    }
    cout << -1;
}
int main() {
    fastio();
    solve();
}
