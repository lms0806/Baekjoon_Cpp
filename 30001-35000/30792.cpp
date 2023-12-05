#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int n;

    cin >> n;

    int ch;
    
    cin >> ch;

    int idx = 1;
    while (--n) {
        int num;

        cin >> num;

        if (num > ch) {
            idx++;
        }
    }

    cout << idx;
}
int main() {
    fastio();
    solve();
}
