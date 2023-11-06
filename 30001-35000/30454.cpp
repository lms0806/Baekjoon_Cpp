#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int n, m;

    cin >> n >> m;

    int Max = 0, count = 0;
    while (n--) {
        string s;
        
        cin >> s;

        s += " ";

        int cnt = 0;
        bool flag = false;
        for (int i = 0; i < s.size() - 1; i++) {
            if (s[i] == '1') {
                flag = true;
            }

            if (s[i] != s[i + 1]) {
                if (flag) {
                    cnt++;
                }
                flag = false;
            }
        }

        if (Max < cnt) {
            Max = cnt;
            count = 1;
        }
        else if (Max == cnt) {
            count++;
        }
    }

    cout << Max << " " << count;
}

int main() {
    fastio();
    solve();
}
