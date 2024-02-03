#include<bits/stdc++.h>

using namespace std;

int arr[22][22];

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int n, k;
    double min = 0, max = 0;

    cin >> n >> k;

    for (int i = 0; i < k; i++) {
        int num;

        cin >> num;

        max += num;
    }
    min = max;

    min += -3 * (n - k);
    max += 3 * (n - k);

    cout << min / n << " " << max / n;
}
int main() {
    fastio();
    solve();
}
