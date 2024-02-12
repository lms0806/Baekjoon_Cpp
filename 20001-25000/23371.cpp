#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int n, s, k;

    cin >> n >> s >> k;

    vector<int> v(n + 1);

    int cnt = 0;
    while (k--) {
        int num;

        cin >> num;

        v[(num - 1) / s]++;

        cnt = max(cnt, v[(num - 1) / s]);
    }

    for (int i = cnt; i > 0; i--) {
        for (int j = 0; j < n; j++) {
            cout << (v[j] >= i ? "#" : ".");
        }
        cout << "\n";
    }
    cout << string(n, '-');
}
int main() {
    fastio();
    solve();
}
