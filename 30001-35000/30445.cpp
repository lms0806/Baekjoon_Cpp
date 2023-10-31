#include<bits/stdc++.h>

using namespace std;

int alpha[26];

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    string s;

    getline(cin, s);

    for (auto c : s) {
        if (c >= 'A' && c <= 'Z') {
            alpha[c - 'A']++;
        }
    }

    double h = alpha[0] + alpha[7] + alpha[15] + alpha[24];
    double g = alpha[0] + alpha[3] + alpha[18];

    if (!h && !g) {
        cout << "50.00";
    }
    else {
        cout << fixed << setprecision(2) << round(h / (h + g) * 10000) / 100;
    }
}
int main() {
    fastio();
    solve();
}
