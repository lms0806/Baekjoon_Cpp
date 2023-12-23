#include<bits/stdc++.h>

using namespace std;

int arr[1001];

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int n;

    cin >> n;

    int jinju = 0;
    for (int i = 0; i < n; i++) {
        int num = 0;
        string s;

        cin >> s >> num;

        arr[i] = num;

        if (s == "jinju") {
            jinju = num;
        }
    }

    int answer = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > jinju) {
            answer++;
        }
    }

    cout << jinju << "\n" << answer;
}
int main() {
    fastio();
    solve();
}
