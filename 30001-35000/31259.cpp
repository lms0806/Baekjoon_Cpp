#include<bits/stdc++.h>

using namespace std;

int alpha[26];

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    char c;

    cin >> c;
    while (c != '@') {
        if (c >= 'a' && c <= 'z') {
            alpha[c - 'a']++;
        }
        else if (c >= 'A' && c <= 'Z') {
            alpha[c - 'A']++;
        }
        cin >> c;
    }

    int Max = 0;
    for (int a : alpha) {
        Max = max(Max, a);
    }

    while (Max) {
        for (int i = 0; i < 26; i++) {
            if (alpha[i] == Max) {
                cout << (char)('A' + i);
                alpha[i]--;
            }
            else {
                cout << " ";
            }
        }
        cout << "\n";

        Max--;
    }

    cout << "--------------------------\n";
    cout << "ABCDEFGHIJKLMNOPQRSTUVWXYZ\n";
}

int main() {
    fastio();
    solve();
}
