#include<bits/stdc++.h>

using namespace std;

struct Node {
    int x, y, wall, cost;
};

int n, m;
int dx[] = { 1, 0, -1, 0 };
int dy[] = { 0, -1, 0, 1 };
char board[1001][1001];
bool visited[1001][1001][2];
queue<Node> q;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

int bfs() {
    q.push({ 0, 0, 0, 1 });
    visited[0][0][0] = true;

    while (!q.empty()) {
        auto [x, y, wall, cost] = q.front();
        q.pop();

        if (x == n - 1 && y == m - 1) {
            return cost;
        }

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
                if (!visited[nx][ny][wall]) {
                    if (board[nx][ny] == '1' && wall < 1) {
                        q.push({ nx, ny, wall + 1, cost + 1 });
                        visited[nx][ny][wall] = true;
                    }
                    else if (board[nx][ny] == '0') {
                        q.push({ nx, ny, wall, cost + 1 });
                        visited[nx][ny][wall] = true;
                    }
                }
            }
        }
    }
    return -1;
}
void solve() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> board[i];
    }

    cout << bfs();
}
int main() {
    fastio();
    solve();
}
