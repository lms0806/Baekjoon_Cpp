#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int t;

    cin >> t;

    while (t--) {
        int n;

        cin >> n;

        long long size = 0, answer = 0;
        for (int i = 1; i <= n; i++) {
            size += i;
            answer += size;
        }

        cout << answer << "\n";
    }
}

int main() {
    fastio();
    solve();
}
