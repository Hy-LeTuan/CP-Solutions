#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

void solve() {
    string seq;

    getline(cin, seq);
    cin >> ws;

    int maxLength = 0;

    for (int i = 0; i < seq.length(); i++) {
        char curr = seq[i];

        int j = i + 1;

        while (j < seq.length() && seq[j] == curr) {
            j++;
        }

        maxLength = max(maxLength, j - i);

        i = j - 1;
    }

    cout << maxLength << endl;
}

int main() {
    solve();
}