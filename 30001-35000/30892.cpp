#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

stack<ll> s1, s2;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int n, k;
    ll shark;

    cin >> n >> k >> shark;

    vector<ll> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int idx = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] >= shark) {
            idx = i;
            break;
        }
        s1.push(v[i]);
    }

    for (int i = n - 1; i >= idx; i--) {
        s2.push(v[i]);
    }

    while (k) {
        if (s1.empty() || s1.top() >= shark) {
            break;
        }

        shark += s1.top();
        s1.pop();

        while (!s2.empty()) {
            if (s2.top() < shark) {
                s1.push(s2.top());
                s2.pop();
            }
            else {
                break;
            }
        }
        k--;
    }

    cout << shark;
}
int main() {
    fastio();
    solve();
}
