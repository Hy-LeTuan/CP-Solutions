#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<ull, ull> pull;

void solve() {
	ll x, y;
	cin >> y >> x;

	y--;
	x--;

	ll rounds = max(x, y);
	ll maxVal = (rounds + 1) * (rounds + 1);

	pll maxPos;

	 if (rounds % 2 == 0) {
		maxPos.first = 0;
		maxPos.second = rounds;
	} else {
		maxPos.first = rounds;
		maxPos.second = 0;
	}

	ull res = maxVal - (abs(maxPos.first - y) + abs(maxPos.second - x));

	cout << res << endl;
}

int main() { 
    int t;
	cin >> t;

	while (t--) {
		solve();
	}
}
