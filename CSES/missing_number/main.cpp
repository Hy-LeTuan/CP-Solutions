#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

void solve() {
    ull n;
    cin >> n;

    ull sum = 0;

    for (int i = 0; i < n - 1; i++) {
        int x;
        cin >> x;

        sum += x;
    }

    cout << (n * (n + 1) / 2) - sum << endl;
}

int main() {
    solve();
}