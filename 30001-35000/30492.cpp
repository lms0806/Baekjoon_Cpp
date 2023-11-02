#include<bits/stdc++.h>

using namespace std;

int alpha[1001][26];

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int n, m;

    cin >> n >> m;

    while(n--) {
        string s;

        cin >> s;
        
        for (int j = 0; j < s.size(); j++) {
            alpha[j][s[j] - 'a']++;
        }
    }

    for (int i = 0; i < m; i++) {
        cout << (char)(max_element(alpha[i], alpha[i] + 26) - alpha[i] + 'a');
    }
}
int main() {
    fastio();
    solve();
}
