#include<bits/stdc++.h>

using namespace std;

int cnt[100001];

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int n;

    cin >> n;

    int mx = 0;
    for (int i = 0; i < n; i++) {
        int num;

        cin >> num;

        mx = max(mx, ++cnt[num]);
    }

    n = (n + 1) >> 1;

    cout << (mx > n ? "NO" : "YES");
}
int main() {
    fastio();
    solve();
}
