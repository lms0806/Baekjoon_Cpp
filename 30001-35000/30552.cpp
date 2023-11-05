#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int n;

    cin >> n;

    bool flag = false;
    vector<string> v;
    while (n-- > 0) {
        string s;

        cin >> s;

        if (s == "Present!") {
            for (int i = 0; i < v.size() - 1; i++) {
                cout << v[i] << "\n";
                flag = true;
            }
            v.clear();
        }
        else {
            v.push_back(s);
        }
    }
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << "\n";
        flag = true;
    }

    if (!flag) {
        cout << "No Absences";
    }
}

int main() {
    fastio();
    solve();
}
