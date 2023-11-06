#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int w, h;

    cin >> w >> h;

    int n, a, b;
    
    cin >> n >> a >> b;

    if (a > w || b > h) {
        cout << -1;
    }
    else {
        int size = (w / a) * (h / b);
        cout << ceil((double)n / (double)size);
    }
}

int main() {
    fastio();
    solve();
}
