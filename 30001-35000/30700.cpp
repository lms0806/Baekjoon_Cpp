#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    string s;

    cin >> s;

    int idx = 0, count = 0;
    char ch[5] = { 'K', 'O', 'R', 'E', 'A' };
    for (auto c : s) {
        if (c == ch[idx % 5]) {
            count++;
            idx++;
        }
    }
    cout << count;
}
int main() {
    fastio();
    solve();
}
