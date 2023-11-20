#include<bits/stdc++.h>

using namespace std;

int n, m;
vector<string> board;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int n;

    cin >> n;

    vector<string> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++) {
        if (v[i].size() == 3) {
            cout << v[i];
            break;
        }
    }
}
int main() {
    fastio();
    solve();
}
