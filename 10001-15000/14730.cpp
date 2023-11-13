#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int n;

    cin >> n;

    int answer = 0;
    while (n-- > 0) {
        int x, y;

        cin >> x >> y;

        answer += x * y;
    }
    cout << answer;
}
int main() {
    fastio();
    solve();
}
