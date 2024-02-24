#include<bits/stdc++.h>

using namespace std;

char a[100][100], b[100][100];

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int t;

    cin >> t;

    while (t--) {
        int na, ma, nb, mb;

        cin >> na >> ma;

        for (int i = 0; i < na; i++) {
            for (int j = 0; j < ma; j++) {
                cin >> a[i][j];
            }
        }

        cin >> nb >> mb;

        for (int i = 0; i < nb; i++) {
            for (int j = 0; j < mb; j++) {
                cin >> b[i][j];
            }
        }

        int answer = 0;
        for (int i = 0; i <= nb - na; i++) {
            for (int j = 0; j <= mb - ma; j++) {
                bool flag = true;
                for (int k = 0; k < na; k++) {
                    for (int l = 0; l < ma; l++) {
                        if (b[i + k][j + l] != a[k][l]) {
                            flag = false;
                            break;
                        }
                    }

                    if (!flag) {
                        break;
                    }
                }

                if (flag) {
                    answer++;
                }
            }
        }

        cout << answer << "\n";
    }
}
int main() {
    fastio();
    solve();
}
