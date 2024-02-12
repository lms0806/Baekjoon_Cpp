#include<bits/stdc++.h>

using namespace std;

vector<int> v(11);

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

int solve(int s, int e) {
    int num = 1;
    for (int i = s; i <= e; i++) {
        num *= v[i];
    }
    return num;
}

void solve() {
    int n;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }

    int answer = 0;
    for (int i = 1; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                answer = max(answer, solve(1, i) + solve(i + 1, j) + solve(j + 1, k) + solve(k + 1, n));
            }
        }
    }

    cout << answer;
}
int main() {
    fastio();
    solve();
}
