#include<bits/stdc++.h>

using namespace std;

void solve(){
	for(int i = 0; i < 15; i++){
		char c;

		for(int j = 0; j < 15; j++){
			cin >> c;

			if(c == 'w'){
				cout << "chunbae";
				return;
			} else if(c == 'b'){
				cout << "nabi";
				return;
			} else if(c == 'g'){
				cout << "yeongcheol";
				return;
			}
		}
	}
}

int main(){
	solve();
}
