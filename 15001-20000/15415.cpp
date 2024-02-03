#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int w, n, sum = 0;

    cin >> w >> n;

    while (n--) {
        int a, b;

        cin >> a >> b;

        sum += a * b;
    }

    cout << sum / w;
}
int main() {
    fastio();
    solve();
}
