#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int n;

    cin >> n;

    vector<int> v;

    int answer = 0;
    while (n--) {
        int num;

        cin >> num;

        if (num % 2 == 0) {
            answer += num;
        }
        else {
            v.push_back(num);
        }
    }

    sort(v.begin(), v.end());

    for (int i = v.size() - 1; i >= 0; i -= 2) {
        if (i > 0) {
            answer += v[i] + v[i - 1];
        }
    }

    cout << (answer >> 1);
}

int main() {
    fastio();
    solve();
}
