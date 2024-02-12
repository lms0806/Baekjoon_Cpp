#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int n, t = 1;
    while(cin >> n && n) {
        double mn = 1e9;
        int answer = 0;
        while (n--) {
            int d, p;

            cin >> d >> p;

            double num = p / (pow(d / 2, 2) * 3.14159265358979);

            if (num < mn) {
                mn = num;
                answer = d;
            }
        }
        cout << "Menu " << t++ << ": " << answer << "\n";
    }
}
int main() {
    fastio();
    solve();
}
