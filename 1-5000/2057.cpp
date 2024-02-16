#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    ll n, fact[20];

    cin >> n;

    fact[0] = 1;
    for (int i = 1; i < 20; i++) {
        fact[i] = fact[i - 1] * i;
    }

    if (n == 0) {
        cout << "NO";
    }
    else {
        for (int i = 19; i >= 0; i--) {
            if (n >= fact[i]) {
                n -= fact[i];
            }
        }

        cout << (n ? "NO" : "YES");
    }

}
int main() {
    fastio();
    solve();
}
