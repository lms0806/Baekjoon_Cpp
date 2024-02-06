#include<bits/stdc++.h>

using namespace std;

vector<string> v[101];

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int t;

    cin >> t;

    while (t--) {
        string s, eq;
        double num;

        cin >> s >> eq >> num;

        if (s == "H") {
            num = -log10(num);
        }
        else {
            num = 14 + log10(num);
        }

        printf("%0.2f\n", num);
    }
}
int main() {
    fastio();
    solve();
}
