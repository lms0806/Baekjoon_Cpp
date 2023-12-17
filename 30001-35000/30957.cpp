#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int n;

    cin >> n;

    string str;

    cin >> str;

    int b = 0, s = 0, a = 0, num = 0;
    for(auto ss : str){
        if (ss == 'B') {
            b++;
            num = max(num, b);
        }
        else if (ss == 'S') {
            s++;
            num = max(num, s);
        }
        else {
            a++;
            num = max(num, a);
        }
    }

    if (b == s && s == a) {
        cout << "SCU";
    }
    else {
        if (num == b) {
            cout << 'B';
        }
        if (num == s) {
            cout << 'S';
        }
        if (num == a) {
            cout << 'A';
        }
    }
}
int main() {
    fastio();
    solve();
}
