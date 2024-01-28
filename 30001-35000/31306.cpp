#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int aeiou = 0, y = 0;
    string s;

    cin >> s;

    for (auto a : s) {
        if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u') {
            aeiou++;
        }
        else if (a == 'y') {
            y++;
        }
    }

    cout << aeiou << " " << (aeiou + y);
}
int main() {
    fastio();
    solve();
}
