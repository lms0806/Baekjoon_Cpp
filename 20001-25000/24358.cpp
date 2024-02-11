#include<bits/stdc++.h>

using namespace std;

int days[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int x, n, d, m, y;

    cin >> x >> n >> d >> m >> y;

    d = (2 * x - 1) * n - 1 + d;

    if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {
        if (m == 2) {
            if (d > 29) {
                d -= 29;
                m++;
            }
        }
        else if (d > days[m]) {
            d -= days[m];
            m++;
        }
    }
    else {
        if (d > days[m]) {
            d -= days[m];
            m++;
        }
    }

    if (m > 12) {
        m = 1;
        y++;
    }

    cout << d << " " << m << " " << y;
}
int main() {
    fastio();
    solve();
}
