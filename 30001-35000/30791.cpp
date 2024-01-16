#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int a, b, c, d, e, answer = 0;

    cin >> a >> b >> c >> d >> e;

    a -= 1000;

    if (a <= b) {
        answer++;
    }
    if (a <= c) {
        answer++;
    }
    if (a <= d) {
        answer++;
    }
    if (a <= e) {
        answer++;
    }

    cout << answer;
}

int main() {
    fastio();
    solve();
}
