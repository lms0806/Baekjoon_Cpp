#include<bits/stdc++.h>

using namespace std;

bool prime[10008];
vector<int> v;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void checkPrime() {
    prime[0] = prime[1] = true;
    for (int i = 2; i * i <= 10007; i++) {
        if (!prime[i]) {
            for (int j = i * i; j <= 10007; j += i) {
                prime[j] = true;
            }
        }
    }

    for (int i = 2; i < 10008; i++) {
        if (!prime[i]) {
            v.push_back(i);
        }
    }
}

void solve() {
    checkPrime();

    int t;

    cin >> t;

    while (t--) {
        int n;

        cin >> n;

        int answer = 1e9;
        
        for (int i = 0; i < v.size(); i++) {
            if (v[i] == n) {
                answer = 0;
                break;
            }
            answer = min(answer, abs(v[i] - n));
            if (v[i] > n) {
                break;
            }
        }

        cout << "Input value: " << n << "\n";
        if (answer == 0) {
            cout << "Would you believe it; it is a prime!";
        }
        else {
            cout << "Missed it by that much (" << answer << ")!";
        }
        cout << "\n\n";
    }
}
int main() {
    fastio();
    solve();
}
