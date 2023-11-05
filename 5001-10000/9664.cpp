#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int n, o;

    cin >> n >> o;

    int start = o;
    int Min = 1000, Max = 0;
    while (true) {
        if (o - (o / n) > start) {
            break;
        }
        else if (o - (o / n) == start) {
            Min = min(Min, o);
            Max = max(Max, o);
        }

        o++;
    }

    cout << Min << " " << Max;
}

int main() {
    fastio();
    solve();
}
