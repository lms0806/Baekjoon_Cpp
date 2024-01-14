#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int size;

    cin >> size;

    for(int t = 1; t <= size; t++) {
        int n, m, p;

        cin >> n >> m >> p;

        p--;

        vector<vector<int>> v(n, vector<int>(m, 0));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> v[i][j];
            }
        }

        int answer = 0;
        for (int i = 0; i < m; i++) {
            int Max = 0, num = 0;
            for (int j = 0; j < n; j++) {
                if (j == p) {
                    num = v[j][i];
                    continue;
                }

                Max = max(Max, v[j][i]);
            }

            if (Max > num) {
                answer += Max - num;
            }
        }
        cout << "Case #" << t << ": " << answer << "\n";
    }
}

int main() {
    fastio();
    solve();
}
