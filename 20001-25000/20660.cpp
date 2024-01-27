#include<bits/stdc++.h>

using namespace std;

set<int> notLike;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int n;

    cin >> n;

    while (n--) {
        int num;

        cin >> num;

        notLike.insert(num);
    }

    int t;

    cin >> t;

    int answer = 0;
    while (t--) {
        int k;

        cin >> k;

        bool check = true;
        while (k--) {
            int b;

            cin >> b;

            if (notLike.count(b)) {
                check = false;
            }
        }

        if (check) {
            answer++;
        }
    }
    cout << answer;
}
int main() {
    fastio();
    solve();
}
