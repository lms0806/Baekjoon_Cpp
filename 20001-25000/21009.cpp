#include<bits/stdc++.h>

using namespace std;

int arr[11][11];

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int n;

    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        int count = 0, num = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j][i] > num) {
                num = arr[j][i];
                count++;
            }
        }
        cout << count << " ";
    }
    cout << "\n";
    
    for (int i = 0; i < n; i++) {
        int count = 0, num = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i][j] > num) {
                num = arr[i][j];
                count++;
            }
        }
        cout << count << "\n";
    }
}
int main() {
    fastio();
    solve();
}
