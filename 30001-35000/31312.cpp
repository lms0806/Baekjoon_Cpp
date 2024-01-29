#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int n, Min, Max;

    cin >> n >> Min >> Max;

    bool checkMin = false, checkMax = false;
    for (int i = 1; i < n; i++) {
        int num;

        cin >> num;

        if (num == Min) {
            checkMin = true;
        }
        else if (num == Max) {
            checkMax = true;
        }
    }

    if (!checkMin) {
        cout << (checkMax ? Min : -1);
    }
    else if (!checkMax) {
        cout << Max;
    }
    else {
        for (int i = Min; i <= Max; i++) {
            cout << i << "\n";
        }
    }
}
int main() {
    fastio();
    solve();
}
