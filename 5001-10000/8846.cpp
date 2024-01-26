#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int n;

    cin >> n;

    long long answer = 0, count = 1;
    while (n--) {
        answer += count;
        answer %= 500000009;
        count = (count << 2) % 500000009;
    }
    cout << answer;
}
int main() {
    fastio();
    solve();
}
