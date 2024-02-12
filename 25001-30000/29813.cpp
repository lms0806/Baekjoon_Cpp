#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int n;

    cin >> n;

    queue<pair<string, int>> q;
    for (int i = 0; i < n; i++) {
        string s;
        int num;

        cin >> s >> num;

        q.push({ s, num });
    }

    while (q.size() >= 2) {
        int x = q.front().second;
        q.pop();

        for (int i = 1; i < x; i++) {
            q.push({ q.front().first, q.front().second });
            q.pop();
        }
        q.pop();
    }

    cout << q.front().first;
}
int main() {
    fastio();
    solve();
}
