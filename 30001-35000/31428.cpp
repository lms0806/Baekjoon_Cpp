#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int n;

    cin >> n;

    vector<char> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    char c;

    cin >> c;

    int answer = 0;
    for (auto ch : v) {
        if (c == ch) {
            answer++;
        }
    }
    cout << answer;
}
int main() {
    fastio();
    solve();
}
