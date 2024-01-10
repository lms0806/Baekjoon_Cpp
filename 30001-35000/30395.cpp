#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int n;
    
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int friezeIndex = -2;
    int answer = 0, now = 0;
    for (int i = 0; i < n; i++) {
        if (v[i]) {
            now++;
        }
        else if (friezeIndex + 2 <= i) {
            friezeIndex = i;
        }
        else {
            now = 0;
        }

        answer = max(answer, now);
    }

    cout << answer;
}
int main() {
    fastio();
    solve();
}
