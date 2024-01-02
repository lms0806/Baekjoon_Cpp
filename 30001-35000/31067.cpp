#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int n, k;

    cin >> n >> k;

    int answer = 0, number = 0;
    while (n--) {
        int num;

        cin >> num;

        if (number >= num) {
            num += k;
            answer++;

            if (number >= num) {
                answer = -1;
                break;
            }
        }
        
        number = num;
    }

    cout << answer;
}
int main() {
    fastio();
    solve();
}
