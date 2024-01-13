#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int n, m;
    
    cin >> n >> m;

    vector<int> a(n), b(m);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int size = min(n, m);

    int answer = 0;
    for (int i = 0; i < size; i++) {
        answer += a[a.size() - i - 1] * b[b.size() - i - 1];
    }

    cout << size << " " << answer;
}

int main() {
    fastio();
    solve();
}
