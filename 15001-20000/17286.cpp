#include<bits/stdc++.h>

using namespace std;

int arr[4][2];

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

double calc(int a, int b) {
    return sqrt(pow((arr[a][0] - arr[b][0]), 2) + pow((arr[a][1] - arr[b][1]), 2));
}

void solve() {
    for (int i = 0; i < 4; i++) {
        cin >> arr[i][0] >> arr[i][1];
    }

    double answer = 1e200;
    for (int i = 1; i < 4; i++) {
        for (int j = 1; j < 4; j++) {
            if (i == j) {
                continue;
            }

            answer = min(answer, calc(0, i) + calc(i, j) + calc(j, 6 - i - j));
        }
    }

    cout << (int)answer;
}
int main() {
    fastio();
    solve();
}
