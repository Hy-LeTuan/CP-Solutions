#include <iostream>
#include <string>
// #include <unordered_map>

using namespace std;

void solve() {
    string s, t, res;
    int best_index_on_t = -1;
    int best_index_on_s = -1;
    int t_index;
    int s_index;
    int best_len = 1e7;
    cin >> ws;
    getline(cin, s);
    getline(cin, t);

    // unordered_map<char, int> entrance;
    int t_entrance[26];
    int s_entrance[26];

    int s_counter = 1;

    for (int i = 0; i < 26; i++) {
        t_entrance[i] = -1;
        s_entrance[i] = -1;
    }

    for (int i = t.size() - 2; i >= 0; --i) {
        // if (entrance.find(t[i]) == entrance.end()) {
        //     entrance[t[i]] = i;
        // }
        //
        t_index = t[i] - 'a';

        if (t_entrance[t_index] == -1) {
            t_entrance[t_index] = i;
        } else if (s_counter < s.size()) {
            s_index = s[s_counter] - 'a';
            if (s_entrance[s_index] == -1) s_entrance[s_index] = s_counter;
            s_counter++;
        }

    }

    if (s_counter < s.size()) {
        for (int i = s_counter; i < s.size(); i++) {
            s_index = s[i] - 'a';
            if (s_entrance[s_index] == -1) {
                s_entrance[s_index] = i;
            }
        }
    }

    for (int i = 0; i < 26; i++) {
        int len_s = s_entrance[i];
        int len_t = t_entrance[i];

        if (len_s != -1 && len_t != -1) {
            if (best_len > len_s + (t.size() - len_t)) {
                best_len = len_s + (t.size() - len_t); 
                // cout << "assign" << endl;
                // cout << len_s << endl;
                // cout << len_t << endl;
                best_index_on_s = len_s;
                best_index_on_t = len_t;
            }
        }
    }

    if (best_index_on_t != -1 && best_index_on_s != -1) {
        // cout << "t: " << best_index_on_t << " " << t.size() << endl;
        // cout << "s: " << best_index_on_s << " " << s.size() << endl;
        res = s.substr(0, best_index_on_s) + t.substr(best_index_on_t, t.size() - best_index_on_t);
    } else {
        res = "";
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
