#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int count = 1;
    while (true) {
        int n;

        cin >> n;

        if (!n) {
            break;
        }

        vector<vector<string>> v(n, vector<string>(n));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> v[i][j];
            }
        }

        cout << "Group " << count++ << "\n";
        bool flag = false;
        for (int i = 0; i < n; i++) {
            for (int j = 1; j < n; j++) {
                if (v[i][j] == "N") {
                    int idx = i - j;

                    if (idx < 0) {
                        idx += n;
                    }

                    cout << v[idx][0] << " was nasty about " << v[i][0] << "\n";
                    flag = true;
                }
            }
        }

        if (!flag) {
            cout << "Nobody was nasty" << "\n";
        }
        cout << "\n";
    }
}
int main() {
    fastio();
    solve();
}
