#include<bits/stdc++.h>

using namespace std;

int n, m;
bool arr[401][401];

void fw() {
	for (int k = 1; k <= n; k++) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (arr[i][k] && arr[k][j]) {
					arr[i][j] = true;
				}
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n >> m;

	while (m--) {
		int a, b;

		cin >> a >> b;

		arr[a][b] = true;
	}

	fw();

	int t;

	cin >> t;

	while (t--) {
		int x, y;

		cin >> x >> y;

		if (x < 1 || y < 1 || x > n || y > n) {
			cout << 0;
		}
		else {
			if (arr[x][y]) {
				cout << -1;
			}
			else {
				cout << (arr[y][x] ? 1 : 0);
			}
		}
		cout << "\n";
	}
}
