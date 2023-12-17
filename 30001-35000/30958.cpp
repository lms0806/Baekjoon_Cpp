#include<bits/stdc++.h>

using namespace std;

int alpha[26];

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int n;

    cin >> n;

    string s;
    while (getline(cin, s)) {
        for (auto a : s) {
            if ('a' <= a && a <= 'z') {
                alpha[a - 'a']++;
            }
        }
    }

    int answer = 0;
    for (int a : alpha) {
        answer = max(answer, a);
    }
    cout << answer;
}
int main() {
    fastio();
    solve();
}
