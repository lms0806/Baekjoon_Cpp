#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int n, m;

    cin >> n >> m;

    int answer = 0;
    while (n--) {
        int num;

        cin >> num;

        answer += num / m;
    }
    cout << answer;
}
int main() {
    fastio();
    solve();
}
