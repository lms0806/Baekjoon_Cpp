#include<bits/stdc++.h>

using namespace std;

int n, m, k;
int sx, sy, ex, ey;

vector<vector<char>> board;
vector<vector<int>> dist;

int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};
int dx2[] = { 2, 0, -2, 0 };
int dy2[] = { 0, 2, 0, -2 };

struct Node {
    int x, y, cost;
};

struct compare {
    bool operator()(const Node& s1, const Node& s2) {
        return s1.cost > s2.cost;
    }
};

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

bool check(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < m && board[x][y] == '.';
}

bool bfs() {
    priority_queue<Node, vector<Node>, compare> pq;
    pq.push({ sx, sy, 0 });
    dist[sx][sy] = 0;

    while (!pq.empty()) {
        Node now = pq.top();
        int x = now.x, y = now.y, cost = now.cost;
        pq.pop();

        if (x == ex && y == ey) {
            return true;
        }

        if (cost < k) {
            for (int i = 0; i < 4; i++) {
                int nx = x + dx2[i];
                int ny = y + dy2[i];

                if (check(nx,ny) && dist[nx][ny] > dist[x][y] + 1) {
                    dist[nx][ny] = dist[x][y] + 1;
                    pq.push({ nx, ny, dist[nx][ny]});
                }
            }
        }
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (check(nx, ny) && dist[nx][ny] > dist[x][y]) {
                dist[nx][ny] = dist[x][y];
                pq.push({ nx, ny, dist[nx][ny]});
            }
        }
    }
    return false;
}

void solve() {
    cin >> n >> m >> k;

    board = vector<vector<char>>(n);
    dist = vector<vector<int>>(n, vector<int>(m, 1e9));

    for (int i = 0; i < n; i++) {
        string s;

        cin >> s;

        for (int j = 0; j < s.size(); j++) {
            board[i].push_back(s[j]);
        }
    }

    cin >> sx >> sy >> ex >> ey;

    sx--;
    sy--;
    ex--;
    ey--;

    cout << (bfs() ? "YES" : "NO");
}

int main() {
    fastio();
    solve();
}
