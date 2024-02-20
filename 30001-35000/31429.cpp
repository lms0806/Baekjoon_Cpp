#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int solve[] = { 12, 11, 11, 10, 9, 9, 9, 8, 7, 6, 6 };
    int time[] = { 1600, 894, 1327, 1311, 1004, 1178, 1357, 837, 1055, 556, 773 };

    int n;

    cin >> n;

    cout << solve[n - 1] << " " << time[n - 1];
}
int main() {
    fastio();
    solve();
}
