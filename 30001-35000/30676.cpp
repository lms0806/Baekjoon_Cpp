#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int n;

    cin >> n;

    if (620 <= n && n <= 780) {
        cout << "Red";
    }
    else if (590 <= n) {
        cout << "Orange";
    }
    else if (570 <= n) {
        cout << "Yellow";
    }
    else if (495 <= n) {
        cout << "Green";
    }
    else if (450 <= n) {
        cout << "Blue";
    }
    else if (425 <= n) {
        cout << "Indigo";
    }
    else {
        cout << "Violet";
    }
}
int main() {
    fastio();
    solve();
}
