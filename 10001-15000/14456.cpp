#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int t;

    cin >> t;

    int count1 = 0, count2 = 0;
    while (t--) {
        int a, b;

        cin >> a >> b;

        if ((a == 1 && b == 3) || (a == 2 && b == 1) || (a == 3 && b == 2)) {
            count1++;
        }
        else if ((a == 1 && b == 2) || (a == 2 && b == 3) || (a == 3 && b == 1)) {
            count2++;
        }
    }

    cout << max(count1, count2);
}
int main() {
    fastio();
    solve();
}
