#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int n, m;

    cin >> n >> m;

    int a, b, c;
    vector<int> v(n + 1, 0);
    while (m--) {
        cin >> a >> b;

        if (a < 3) {
            cin >> c;
        }

        if (a == 1) {
            v[b] |= (1 << c);
        }
        else if (a == 2) {
            v[b] &= ~(1 << c);
        }
        else if (a == 3) {
            v[b] <<= 1;
            v[b] &= ((1 << 21) - 1);
        }
        else {
            v[b] >>= 1;
            v[b] &= ~1;
        }
    }

    int answer = 0;
    vector<bool> visited(1 << 21, false);
    for (int i = 1; i <= n; i++) {
        if (!visited[v[i]]) {
            answer++;
        }
        visited[v[i]] = 1;
    }
    cout << answer;
}

int main() {
    fastio();
    solve();
}
