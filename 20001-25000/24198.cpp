#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int n;

    cin >> n;

    bool flag = false;
    int a = 0, b = 0;
    while (n) {
        if (n % 2 == 1) {
            if (flag) {
                a += n / 2 + 1;
            }
            else {
                b += n / 2 + 1;
            }
        }
        else {
            if (flag) {
                a += n / 2;
            }
            else {
                b += n / 2;
            }
        }

        flag = !flag;

        n /= 2;
    }

    cout << a << " " << b;
}
int main() {
    fastio();
    solve();
}
