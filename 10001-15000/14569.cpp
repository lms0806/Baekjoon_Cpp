#include<bits/stdc++.h>

typedef long long ll;

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int n;

    cin >> n;

    vector<ll> v(n);
    for(int i = 0; i < n; i++){
        int t;

        cin >> t;

        ll num;
        for (int j = 0; j < t; j++) {
            cin >> num;

            v[i] |= (1ll << num);
        }
    }

    int m;

    cin >> m;

    while (m--) {
        int t;

        cin >> t;

        ll num, nums = 0;
        for (int i = 0; i < t; i++) {
            cin >> num;

            nums |= (1ll << num);
        }

        int answer = 0;
        for (int i = 0; i < n; i++) {
            if (v[i] == (nums & v[i])) {
                answer++;
            }
        }
        cout << answer << "\n";
    }
}
int main() {
    fastio();
    solve();
}
