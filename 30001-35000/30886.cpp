#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    double n;

    cin >> n;

    n = pow((sqrt(n / 3.14159265358979) + 1) * 2, 2);

    printf("%.10lf", n);
}

int main() {
    fastio();
    solve();
}
