#include<bits/stdc++.h>

using namespace std;

int arr[1001], sum[1001];

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int n, k, m;

    cin >> n >> k >> m;

    for(int i = 0; i < k; i++) {
        int t;

        cin >> t;

        while (t--) {
            int num;

            cin >> num;

            arr[num] = i + 1;
        }
    }

    for (int i = 1; i <= n; i++) {
        int count;

        cin >> count;

        sum[arr[i]] += count;
    }

    int answer = 0;
    for (int i = 1; i <= k; i++) {
        answer += sum[i] / m;
        if (sum[i] % m != 0) {
            answer++;
        }
    }
    cout << answer;
}
int main() {
    fastio();
    solve();
}
