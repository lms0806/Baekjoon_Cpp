#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int n;

    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int s;

    cin >> s;

    for (int i = 0; i < n - 1; i++) {
        if (s == 0) {
            break;
        }

        int count = 0, max = v[i], idx = i;

        for (int j = i + 1; j < n; j++) {
            if (count++ == s) {
                break;
            }

            if (max < v[j]) {
                max = v[j];
                idx = j;
            }
        }

        if (idx > i) {
            for (int j = idx; j > i; j--) {
                int temp = v[j];
                v[j] = v[j - 1];
                v[j - 1] = temp;
            }
        }

        s -= idx - i;
    }

    for (auto i : v) {
        cout << i << " ";
    }
}
int main() {
    fastio();
    solve();
}
