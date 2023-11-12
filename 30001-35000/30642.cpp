#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int n, k;
    string s;

    cin >> n >> s >> k;

    if (s == "annyong" && k % 2 == 1) {
        cout << k;
    }
    else if(s == "induck" && k % 2 == 0){
        cout << k;
    }
    else {
        cout << (k == 1 ? k + 1 : k - 1);
    }

}
int main() {
    fastio();
    solve();
}
