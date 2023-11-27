#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int n;

    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<int> count(10);
    int answer = 0, r = 0, check = 0;
    for (int l = 0; l < n; l++) {
        while (r < n) {
            check += (count[v[r]] == 0 ? 1 : 0);

            if (check <= 2) {
                count[v[r]]++;
                r++;
            }
            else {
                check--;
                break;
            }
        }

        answer = max(answer, r - l);
        if (--count[v[l]] == 0) {
            check--;
        }
    }

    cout << answer;
}
int main() {
    fastio();
    solve();
}
