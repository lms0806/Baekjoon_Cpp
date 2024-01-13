#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    vector<char> a(3), b(3);

    string s;

    cin >> s;

    for (int i = 0; i < 3; i++) {
        a[i] = s[i];
    }
    for (int i = 0; i < 3; i++) {
        b[i] = s[i + 3];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), greater<>());

    for (int i = 0; i < 3; i++) {
        cout << a[i] << b[i];
    }
}
int main() {
    fastio();
    solve();
}
