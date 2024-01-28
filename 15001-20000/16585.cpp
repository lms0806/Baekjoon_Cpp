#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int n;

    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < 2; i++) {
        int answer = 0;
        int num;
        string s;

        cin >> num >> s;

        num--;
        int start = s == "right" ? num : 0;
        int end = s == "right" ? v.size() - 1 : num;

        if (i == 0) {
            for (int j = start; j <= end; j++) {
                answer += v[j];
            }
        }
        else {
            for (int j = start; j <= end; j++) {
                if (v[j] == 0) {
                    answer++;
                }
            }
        }

        cout << answer << " ";
    }
}
int main() {
    fastio();
    solve();
}
