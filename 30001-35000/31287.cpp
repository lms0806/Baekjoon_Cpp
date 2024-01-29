#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int n, k;
    string s;

    cin >> n >> k >> s;

    int count = min(n, k);

    int x = 0, y = 0;
    for (int i = 0; i < count; i++) {
        for (char c : s) {
            if (c == 'U') {
                x--;
            }
            else if (c == 'D') {
                x++;
            }
            else if (c == 'R') {
                y++;
            }
            else {
                y--;
            }

            if (!x && !y) {
                cout << "YES";
                return;
            }
        }
    }
    cout << "NO";
}
int main() {
    fastio();
    solve();
}
