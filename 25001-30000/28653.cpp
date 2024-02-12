#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    string a, b;

    cin >> a >> b;

    int len = a.size();

    a += b;

    sort(a.begin(), a.end());

    for (int i = 0; i < len; i++) {
        cout << a[i];
    }
}
int main() {
    fastio();
    solve();
}
