#include<bits/stdc++.h>

using namespace std;

int arr[51][2];

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int size;
    
    cin >> size;

    for(int t = 1; t <= size; t++) {
        int n;

        cin >> n;

        for (int i = 0; i < n; i++) {
            cin >> arr[i][0] >> arr[i][1];
        }

        int count;

        cin >> count;

        cout << "Case #" << t << ": ";
        while (count--) {
            int time;

            cin >> time;

            int answer = 0;
            for (int i = 0; i < n; i++) {
                if (arr[i][0] <= time && time <= arr[i][1]) {
                    answer++;
                }
            }

            cout << answer << " ";
        }
        cout << "\n";
    }
}
int main() {
    fastio();
    solve();
}
