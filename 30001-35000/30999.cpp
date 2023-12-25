#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int n, m;

    cin >> n >> m;

    int answer = 0;
    while (n--) {
        string s;

        cin >> s;

        int count = 0;
        for (auto c : s) {
            if (c == 'O') {
                count++;
            }
        }

        if (count > m / 2) {
            answer++;
        }
    }

    cout << answer;
}
int main() {
    fastio();
    solve();
}
