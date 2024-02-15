#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int n;

    cin >> n;

    int odd = 0, even = 0;
    while (n--) {
        int num;

        cin >> num;

        if (num & 1) {
            odd++;
        }
        else {
            even++;
        }
    }

    cout << (odd == even || odd - even == 1 ? 1 : 0);
}
int main() {
    fastio();
    solve();
}
