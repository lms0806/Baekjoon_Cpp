#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int n;

    cin >> n;

    vector<int> v(n), answer(n);
    queue<int> q;

    for(int i = 0; i < n; i++) {
        cin >> v[i];

        q.push(i);
    }

    int t = 0;
    while (!q.empty()) {
        int cur = q.front();
        q.pop();

        t++;

        if (--v[cur] == 0) {
            answer[cur] = t;
        }
        else {
            q.push(cur);
        }
    }

    for (int a : answer) {
        cout << a << " ";
    }

}
int main() {
    fastio();
    solve();
}
