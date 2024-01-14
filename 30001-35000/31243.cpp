#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int minTime = 1440, maxTime = 0;
    for (int i = 0; i < 3; i++) {
        int sh, sm, eh, em;

        cin >> sh >> sm >> eh >> em;

        if (sh > eh) {
            eh += 24;
        }

        int time = (eh * 60 + em) - (sh * 60 + sm);

        minTime = min(minTime, time);
        maxTime = max(maxTime, time);
    }

    printf("%d:%02d\n", minTime / 60, minTime % 60);
    printf("%d:%02d", maxTime / 60, maxTime % 60);
}

int main() {
    fastio();
    solve();
}
