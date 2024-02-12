#include<bits/stdc++.h>

using namespace std;

bool check[200001];
typedef long long ll;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int n;

    cin >> n;

    vector<ll> v(n + 1);
    ll sum = 0;
    for (int i = 1; i <= n; i++) {
        cin >> v[i];

        sum += v[i];
    }

    cout << sum << "\n";

    int t;

    cin >> t;

    while (t--) {
        int choice, a, b;

        cin >> choice >> a;

        if (choice == 1) {
            cin >> b;

            if (!check[a]) {
                sum += b - v[a];
            }

            v[a] = b;
        }
        else {
            check[a] = !check[a];

            if (check[a]) {
                sum -= v[a];
            }
            else {
                sum += v[a];
            }
        }

        cout << sum << "\n";
    }
}
int main() {
    fastio();
    solve();
}
