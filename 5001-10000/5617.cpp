#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int total = 0;
    int yae = 0, zik = 0, dun = 0;

    vector<int> v(3);
    while (1) {
        for (int i = 0; i < 3; i++) {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        if (v[0] + v[1] <= v[2]) {
            break;
        }

        if (v[0] * v[0] + v[1] * v[1] < v[2] * v[2]) {
            dun++;
        }
        else if (v[0] * v[0] + v[1] * v[1] == v[2] * v[2]) {
            zik++;
        }
        else {
            yae++;
        }
        total++;
    }

    cout << total << " " << zik << " " << yae << " " << dun;
}
int main() {
    fastio();
    solve();
}
