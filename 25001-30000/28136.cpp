#include<bits/stdc++.h>

using namespace std;

int arr[1000001];

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int n;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    arr[n] = arr[0];
    int answer = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] >= arr[i + 1]) {
            answer++;
        }
    }
    cout << answer;
}
int main() {
    fastio();
    solve();
}
