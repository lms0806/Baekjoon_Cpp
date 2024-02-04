#include<bits/stdc++.h>

using namespace std;

set<pair<int, int>> s;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int w, h;
    for (int i = 1; i <= 150; i++) {
        for (int j = 1; j < i; j++) {
            s.insert(pair<int, int>(i * i + j * j, j));
        }
    }
    while (cin >> h >> w && h) {
        int H = s.upper_bound(pair<int, int>(h * h + w * w, h))->second;
        int sq = s.upper_bound(pair<int, int>(h * h + w * w, h))->first;
        int W = (int)sqrt(sq - H * H);
        cout << H << " " << W << "\n";
    }
}
int main() {
    fastio();
    solve();
}
