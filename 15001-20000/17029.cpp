#include<bits/stdc++.h>

using namespace std;

vector<string> v[101];

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int n;

    cin >> n;

    for (int i = 0; i < n; i++) {
        string name, str;
        int k;

        cin >> name >> k;
        for (int j = 0; j < k; j++) {
            cin >> str;

            v[i].push_back(str);
        }
    }

    int answer = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int cnt = 0;
            for (int k = 0; k < v[i].size(); k++) {
                for (int l = 0; l < v[j].size(); l++) {
                    if (v[i][k] == v[j][l]) {
                        cnt++;
                    }
                }
            }

            answer = max(answer, cnt);
        }
    }
    cout << answer + 1;
}
int main() {
    fastio();
    solve();
}
