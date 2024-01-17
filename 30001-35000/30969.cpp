#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    string s;
    long long n, num, jinju = 0, answer = 0, arr[1010] = { 0 };

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> s >> num;

        arr[min(num, (long long)1001)]++;

        if (s == "jinju") {
            jinju = num;
        }
    }

    for (int i = jinju + 1; i <= 1001; i++) {
        answer += arr[i];
    }

    cout << jinju << "\n" << answer;
}
int main() {
    fastio();
    solve();
}
