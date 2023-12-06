#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    double p, r;

    cin >> p >> r;

    double result = p / r;

    if (result < 0.2) {
        cout << "weak";
    }
    else if (result < 0.4) {
        cout << "normal";
    }
    else if (result < 0.6) {
        cout << "strong";
    }
    else {
        cout << "very strong";
    }

}
int main() {
    fastio();
    solve();
}
