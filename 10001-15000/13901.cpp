#include<bits/stdc++.h>

using namespace std;

int dist[4];
bool visited[1001][1001];

int dx[] = { -1, 1, 0, 0 };
int dy[] = { 0, 0, -1, 1 };

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    int r, c, k;

    cin >> r >> c >> k;

    while (k--) {
        int br, bc;

        cin >> br >> bc;

        visited[br][bc] = true;
    }

    int sx, sy;

    cin >> sx >> sy;

    visited[sx][sy] = true;

    for (int i = 0; i < 4; i++) {
        cin >> dist[i];
    }

    while (1) {
        bool flag = false;

        for (int i = 0; i < 4; i++) {
            while (true) {
                int nx = sx + dx[dist[i] - 1];
                int ny = sy + dy[dist[i] - 1];

                if (nx < 0 || nx >= r || ny < 0 || ny >= c || visited[nx][ny]) {
                    break;
                }

                visited[nx][ny] = true;
                flag = true;
                sx = nx;
                sy = ny;
            }
        }

        if (!flag) {
            break;
        }
    }

    cout << sx << " " << sy;
}
int main() {
    fastio();
    solve();
}
