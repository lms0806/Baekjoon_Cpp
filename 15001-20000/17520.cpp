#include<bits/stdc++.h>
#define mod 16769023;

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int n;

    cin >> n;

    int answer = 2;
    for (int i = 2; i <= n; i++) {
        if (i % 2) {
            answer = (answer << 1) % mod;
        }
    }
    cout << answer;
}
int main() {
    fastio();
    solve();
}
