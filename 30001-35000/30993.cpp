#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

ll calc(int n) {
    ll sum = 1;
    while (n) {
        sum *= n;
        n--;
    }
    return sum;
}

void solve() {
    int n, a, b, c;

    cin >> n >> a >> b >> c;

    cout << (calc(n) / (calc(a) * calc(b) * calc(c)));
}
int main() {
    fastio();
    solve();
}
