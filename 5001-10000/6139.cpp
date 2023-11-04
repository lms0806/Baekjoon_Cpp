#include<bits/stdc++.h>

using namespace std;

int parent[100001];

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int n, t;

    cin >> n >> t;

    while (t--) {
        int si, ti, ri;

        cin >> si >> ti >> ri;

        int answer = 0, sum = 0;
        while (true) {
            for (int i = 0; i < ti; i++) {
                sum += si;
                answer++;

                if (sum >= n) {
                    break;
                }
            }

            if (sum >= n) {
                break;
            }

            answer += ri;
        }

        cout << answer << "\n";
    }
}
int main() {
    fastio();
    solve();
}
