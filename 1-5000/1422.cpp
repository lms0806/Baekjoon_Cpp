#include<bits/stdc++.h>

using namespace std;

int arr[100001];

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

bool compare(string a, string b) {
    if (a.size() == b.size()) {
        return a > b;
    }
    return a.size() > b.size();
}

bool compare2(string a, string b) {
    return a + b > b + a;
}

void solve() {
    int n, k;

    cin >> k >> n;

    vector<string> v(n), v2(n);
    for (int i = 0; i < k; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.begin() + k, compare);

    for (int i = 0; i < k; i++) {
        v2[i] = v[i];
    }
    for (int i = k; i < n; i++) {
        v2[i] = v[0];
    }

    sort(v2.begin(), v2.end(), compare2);

    for (int i = 0; i < n; i++) {
        cout << v2[i];
    }
}
int main() {
    fastio();
    solve();
}
