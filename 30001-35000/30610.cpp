#include<bits/stdc++.h>

using namespace std;

int n, m;

vector<vector<char>> board;
vector<vector<bool>> visited;

int dx[] = { 1, 0, -1, 0 };
int dy[] = { 0, 1, 0, -1 };

struct Node {
    int x, y;
};

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

bool check(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < m && board[x][y] == '1' && !visited[x][y];
}

int bfs(int sx, int sy) {
    queue<Node> q;
    q.push({ sx, sy });
    visited[sx][sy] = true;

    int count = 0;
    while (!q.empty()) {
        Node now = q.front();
        int x = now.x, y = now.y;
        q.pop();
        
        count++;

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (check(nx, ny)) {
                visited[nx][ny] = true;
                q.push({ nx, ny });
            }
        }
    }

    return count;
}

void solve() {
    cin >> n >> m;

    board = vector<vector<char>>(n, vector<char>());
    visited = vector<vector<bool>>(n, vector<bool>(m, false));

    for (int i = 0; i < n; i++) {
        string s;

        cin >> s;

        for (int j = 0; j < s.size(); j++) {
            board[i].push_back(s[j]);
        }
    }

    int count = 0;
    vector<int> lake;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (board[i][j] == '1' && !visited[i][j]) {
                int cost = bfs(i, j);

                lake.push_back(cost);

                count++;
            }
        }
    }

    sort(lake.begin(), lake.end());

    cout << count << "\n";
    for (auto l : lake) {
        cout << l << " ";
    }
}
int main() {
    fastio();
    solve();
}
