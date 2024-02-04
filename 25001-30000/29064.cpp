#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int n;

    cin >> n;

    int cnt = 0;
    for(int i = 0; i < n; i++) {
        int num;

        cin >> num;

        if (num == 1) {
            cnt++;
        }
    }

    int answer = n / 2 + n % 2 - cnt;
    cout << max(answer, 0);
}
int main() {
    fastio();
    solve();
}
