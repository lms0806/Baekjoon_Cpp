#include<bits/stdc++.h>

using namespace std;

int parent[100001];

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

bool check(string s) {
    for (int i = 1; i < s.length(); i++) {
        if (s[i] < s[i - 1]) {
            return false;
        }
    }
    return true;
}

void solve() {
    int size;

    cin >> size;

    for(int t = 1; t <= size; t++){
        int n;

        cin >> n;

        while (true) {
            if (check(to_string(n))) {
                cout << "Case #" << t << ": " << n << "\n";
                break;
            }

            n--;
        }
    }
}
int main() {
    fastio();
    solve();
}
