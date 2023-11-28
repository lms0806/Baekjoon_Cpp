#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    ll n, d;

    cin >> n >> d;

    vector<int> m, w;
    while (n--) {
        int a, x;

        cin >> a >> x;

        if (a == 1) {
            m.push_back(x);
        }
        else {
            w.push_back(x);
        }
    }

    sort(m.begin(), m.end());
    sort(w.begin(), w.end());

    ll a = 0, b = 0, answer = 0;
    bool mflag = false, wflag = false;
    while (true) {
        if (!mflag && a < m.size() && d > m[a]) {
            d += m[a];

            if (++a == m.size()) {
                mflag = true;
            }
        }
        else {
            if (!wflag && b < w.size()) {
                d *= w[b];

                if (++b == w.size()) {
                    wflag = true;
                }
            }
            else {
                break;
            }
        }

        answer++;
    }

    cout << answer;
}
int main() {
    fastio();
    solve();
}
