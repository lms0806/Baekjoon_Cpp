#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int p, n, r;

    cin >> p >> n >> r;

    int sum = 0, answer = -1;
    while (sum <= p) {
        sum += n;
        n *= r;

        answer++;
    }

    cout << answer;
}
int main() {
    fastio();
    solve();
}
