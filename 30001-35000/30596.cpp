#include<bits/stdc++.h>

using namespace std;

unordered_set<string> Set;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    vector<int> v(4);

    for (int i = 0; i < 4; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    cout << v[0] * v[2];
}
int main() {
    fastio();
    solve();
}
