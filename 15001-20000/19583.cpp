#include<bits/stdc++.h>

using namespace std;

void fastio() {
    cin.tie(0)->sync_with_stdio(0);
}

void solve() {
    string s, e, q;
    int st, et, qt;

    cin >> s >> e >> q;

    st = stoi(s.substr(0, s.find(":"))) * 60 + stoi(s.substr(s.find(":") + 1));
    et = stoi(e.substr(0, e.find(":"))) * 60 + stoi(e.substr(e.find(":") + 1));
    qt = stoi(q.substr(0, q.find(":"))) * 60 + stoi(q.substr(q.find(":") + 1));

    int answer = 0;
    set<string> attend;
    string time, name;
    while (cin >> time >> name) {
        int t = stoi(time.substr(0, time.find(":"))) * 60 + stoi(time.substr(time.find(":") + 1));

        if (t <= st) {
            attend.insert(name);
        }

        if (et <= t && t <= qt) {
            if (attend.count(name)) {
                attend.erase(name);
                answer++;
            }
        }
    }

    cout << answer;
}

int main() {
    fastio();
    solve();
}
