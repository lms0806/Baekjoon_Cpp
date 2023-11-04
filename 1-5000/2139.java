#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};
    while (1) {
        int d, m, y;

        cin >> d >> m >> y;

        if (!d && !m && !y) {
            break;
        }

        int answer = d;
        while (m--) {
            if (m == 2) {
                answer += (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0)) ? 29 : 28;
            }
            else {
                answer += days[m];
            }
        }

        cout << answer << "\n";
    }  
}
int main() {
    fastio();
    solve();
}
