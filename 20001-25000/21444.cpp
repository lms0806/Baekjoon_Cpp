#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int n, p;

    cin >> n >> p;

    int answer = n - 1;

    if (p != 1 && p != n) {
        answer += min(p - 1, n - p);
    }
    while (n--) {
        int num;

        cin >> num;

        answer += num;
    }
    cout << answer;
}
int main() {
    fastio();
    solve();
}
