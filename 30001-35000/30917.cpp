#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int resp, a = 0, b = 0;
    for (int i = 1; i <= 9; i++) {
        cout << "? A " << i << endl;
        cin >> resp;

        if (resp == 1) {
            a = i;
            break;
        }
    }

    for (int i = 1; i <= 9; i++) {
        cout << "? B " << i << endl;
        cin >> resp;

        if (resp == 1) {
            b = i;
            break;
        }
    }

    cout << "! " << a + b;
}
int main() {
    fastio();
    solve();
}
