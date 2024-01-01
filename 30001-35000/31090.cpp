#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int t;

    cin >> t;

    while (t--) {
        int n;

        cin >> n;

        if ((n + 1) % (n % 100) == 0) {
            cout << "Good";
        }
        else {
            cout << "Bye";
        }
        cout << "\n";
    }
}
int main() {
    fastio();
    solve();
}
