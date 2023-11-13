#include<bits/stdc++.h>

using namespace std;

unordered_set<string> Set;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int n;

    cin >> n;

    while (n--) {
        string s;

        cin >> s;

        Set.insert(s);
    }

    cin >> n;

    bool check = true;
    while (n--) {
        string s;

        cin >> s;

        if (!Set.count(s)) {
            check = false;
            break;
        }
    }

    cout << check;
}
int main() {
    fastio();
    solve();
}
