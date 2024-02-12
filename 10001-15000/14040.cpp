#include<bits/stdc++.h>
#include <cstdio>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

bool check(string s) {
    for (int i = 0; i < s.size() / 2; i++) {
        if (s[i] != s[s.size() - i - 1]) {
            return false;
        }
    }
    return true;
}

void solve() {
    string s;

    cin >> s;

    int answer = 0, len = s.size();
    for (int i = 0; i <= s.size(); i++) {
        for (int j = 1; i + j <= s.size(); j++) {
            if (check(s.substr(i, j))) {
                answer = max(answer, j);
            }
        }
    }

    cout << answer;
}
int main() {
    fastio();
    solve();
}
