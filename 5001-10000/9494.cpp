#include<bits/stdc++.h>
#include <cstdio>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int n;
    while (cin >> n && n) {
        cin.ignore();

        int answer = 0;
        while (n--) {
            string s;

            getline(cin, s);

            for (; answer < s.size(); answer++) {
                if (s[answer] == ' ') {
                    break;
                }
            }
        }

        cout << answer + 1 << "\n";
    }
}
int main() {
    fastio();
    solve();
}
