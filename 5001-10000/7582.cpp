#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    while (true) {
        string s;
        int max, answer, t;

        cin >> s >> max;

        if (s == "#" && max == 0) {
            break;
        }

        cin >> answer >> t;

        while (t--) {
            int out, in;

            cin >> out >> in;

            answer -= out;
            answer = min(answer + in, max);
        }

        cout << s << " " << answer << "\n";
    }
}
int main() {
    fastio();
    solve();
}
