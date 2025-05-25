#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<ull, ull> pull;

void solve(int k) {
    if (k == 1) cout << 0 << endl;
    else if (k == 2)cout << 6 << endl;
    else if (k == 3) cout << 28 << endl;
    else if (k == 4) cout << 96 << endl;
    else if (k == 5) cout << 252 << endl;
    else if (k == 6) cout << 550 << endl;
    else {
        ll total = k * k;
        ll border = k * 4 - 4;
        ll innerBorder = (k - 2) * 4 - 4;

        ll corner = 4;
        ll cornerEdge = 8;

        ll outerEdge = border - corner - cornerEdge;
        ll innerEdge = innerBorder - corner;

        ll center = total - border - innerBorder;

        ll res = corner * (total - 3) + cornerEdge * (total - 4) + outerEdge * (total - 5) + corner * (total - 5) + innerEdge * (total - 7) + center * (total - 9);

        cout << res / 2 << endl;

        return;
    }
}

int main() { 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
	cin >> n;

    for (int k = 1; k <= n; k++) {
        solve(k);
    }
}
