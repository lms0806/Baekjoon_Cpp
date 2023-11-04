#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

bool check(long long n) {
    int max = 10;
    long long temp = n;
    while (temp) {
        if (max >= temp % 10) {
            max = temp % 10;
        }
        else {
            return false;
        }

        temp /= 10;
    }
    return true;
}

void solve() {
    int size;

    cin >> size;

    for(int t = 1; t <= size; t++){
        long long n;

        cin >> n;

        if (check(n)) {
            cout << "Case #" << t << ": " << n << "\n";
            continue;
        }

        n -= (n % 10 + 1);
        long long num = 10;
        while (!check(n)) {
            if (n % (num * 10) == (num * 10) - 1) {
                num *= 10;
            }

            n -= num;
        }

        cout << "Case #" << t << ": " << n << "\n";
    }
}
int main() {
    fastio();
    solve();
}
