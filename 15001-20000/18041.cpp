#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int n, x;

    cin >> n >> x;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int top = 1, answer = 1;
    for (int i = 1; i < n; i++) {
        if (v[i] - v[i - 1] > x) {
            top = 1;
        }
        else {
            answer = max(answer, ++top);
        }
    }
    cout << answer;
}
int main() {
    fastio();
    solve();
}
