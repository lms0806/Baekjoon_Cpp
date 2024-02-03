#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int n, answer = 0;

    cin >> n;

    while (n--) {
        int num;

        cin >> num;

        if(num != 1) {
            answer++;
        }
    }
    cout << answer;
}
int main() {
    fastio();
    solve();
}
