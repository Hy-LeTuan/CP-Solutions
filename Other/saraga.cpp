#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

void solve() {
    string s, t, res;
    cin >> ws;
    getline(cin, s);
    getline(cin, t);

    unordered_map<char, int> entrance;

    for (int i = t.size() - 2; i >= 0; --i) {
        if (entrance.find(t[i]) == entrance.end()) {
            entrance[t[i]] = i;
        }
    }

    for (int i = 1; i < s.size(); i++) {
        if (entrance.find(s[i]) != entrance.end()) {
            int start_index_on_t = entrance[s[i]];
            string current_res = s.substr(0, i) + t.substr(start_index_on_t, t.size() - start_index_on_t);

            if (current_res.size() < res.size() || res == "") {
                res = current_res;
            }
        }
    }

    if (res == "") {
        cout << -1 << endl;
    } else {
        cout << res << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    // int t;
    // cin >> t;
    //
    // while (t--) {
    //     solve();
    // }
}
