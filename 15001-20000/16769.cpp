#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int mxa, a, mxb, b, mxc, c;

    cin >> mxa >> a >> mxb >> b >> mxc >> c;

    for (int i = 0; i < 100; i++) {
        if (i % 3 == 0) {
            if (a + b <= mxb) {
                b += a;
                a = 0;
            }
            else {
                a = a + b - mxb;
                b = mxb;
            }
        }
        else if (i % 3 == 1) {
            if (b + c <= mxc) {
                c += b;
                b = 0;
            }
            else {
                b = b + c - mxc;
                c = mxc;
            }
        }
        else if (i % 3 == 2) {
            if (a + c <= mxa) {
                a += c;
                c = 0;
            }
            else {
                c = a + c - mxa;
                a = mxa;
            }
        }
    }

    cout << a << "\n" << b << "\n" << c;
}
int main() {
    fastio();
    solve();
}
