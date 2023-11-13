#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int n;

    cin >> n;

    int Max = -1e9, Min = 1e9;
    while (n--) {
        int x, y;

        cin >> x >> y;

        Min = min(Min, y);
        Max = max(Max, y);
    }

    cout << Max - Min;
}
int main() {
    fastio();
    solve();
}
