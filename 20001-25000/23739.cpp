#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int t;

    cin >> t;

    int time = 0;
    int answer = 0;
    while (t--) {
        int num;

        cin >> num;

        time += num;

        if (time > 30) {
            if (time - 30 <= num / 2) {
                answer++;
            }
        }
        else {
            answer++;
        }

        if (time >= 30) {
            time = 0;
        }
    }

    cout << answer;
}
int main() {
    fastio();
    solve();
}
