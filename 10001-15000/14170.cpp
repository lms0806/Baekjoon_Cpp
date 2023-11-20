#include<bits/stdc++.h>

using namespace std;

int arr[100001];

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int n, m;

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    while (m--) {
        int s, e;

        cin >> s >> e;

        cout << upper_bound(arr, arr + n, e) - lower_bound(arr, arr + n, s) << "\n";
    }
}
int main() {
    fastio();
    solve();
}
