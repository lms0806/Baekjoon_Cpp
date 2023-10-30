#include<bits/stdc++.h>

using namespace std;

string s;

void solve() {
	cin >> s;

	int size = (int)sqrt(s.size());

	for (int i = size - 1; i >= 0; i--) {
		for (int j = 0; j < size; j++) {
			cout << s[i + j * size];
		}
	}
	cout << "\n";
}

int main() {
	int t;

	cin >> t;

	while (t--) {
		solve();
	}
}
