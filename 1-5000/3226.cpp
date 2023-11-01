#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int t;

    cin >> t;

    int answer = 0;
    while (t--) {
        int count;
        string s;

        cin >> s >> count;

        int which = s.find(":");

        int h = stoi(s.substr(0, which)), m = stoi(s.substr(which + 1));

        while (count--) {
            if (7 <= h && h < 19) {
                answer += 10;
            }
            else {
                answer += 5;
            }

            m++;

            if (m == 60) {
                h++;
                m = 0;
            }

            if (h == 24) {
                h = 0;
            }
        }
    }
    cout << answer;
}
int main() {
    fastio();
    solve();
}
