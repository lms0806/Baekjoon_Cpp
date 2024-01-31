#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int n;

    cin >> n;

    vector<int> v(1000), v2(1000);

    while (n--) {
        int num;

        cin >> num;

        v[num]++;
    }

    for (int i = 1; i < 1000; i++) {
        if (v[i]) {
            v2.push_back(i);

            if (v[i] > 1) {
                v2.push_back(i);
            }
        }
    }

    int answer = 0;
    for (int i = 0; i < v2.size(); i++) {
        for (int j = i + 1; j < v2.size(); j++) {
            int num = v2[i] * v2[j];

            int sum = 0;
            while (num != 0) {
                sum += num % 10;
                num /= 10;
            }
            
            answer = max(answer, sum);
        }
    }
    cout << answer;
}
int main() {
    fastio();
    solve();
}
