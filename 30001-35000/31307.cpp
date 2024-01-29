#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int n, lph;

    cin >> n >> lph;

    lph *= 5;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int answer = 0;
    for (auto a : v) {
        if (lph - a < 0) {
            break;
        }
        lph -= a;
        answer++;
    }
    cout << answer;
}
int main() {
    fastio();
    solve();
}
