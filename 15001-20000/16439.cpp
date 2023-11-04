#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int n, m;

    cin >> n >> m;

    vector<vector<int>> v(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int num;

            cin >> num;

            v[i].push_back(num);
        }
    }

    int answer = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            if (i == j) {
                continue;
            }

            for (int k = 0; k < m; k++) {
                if (i == k || j == k) {
                    continue;
                }

                int sum = 0;
                for (int l = 0; l < n; l++) {
                    sum += max(v[l][i], max(v[l][j], v[l][k]));
                }

                answer = max(answer, sum);
            }
        }
    }
    cout << answer;
}

int main() {
    fastio();
    solve();
}
