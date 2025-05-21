#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

void solve() {
    int n;
    cin >> n;

    if (n == 1) {
        cout << 1 << endl;
        return;
    }
    else if (n <= 3) {
        cout << "NO SOLUTION" << endl;
        return;
    } else {
        vector<int> nums(n, 0);

        for (int i = 0; i < n / 2; i++) {
            nums[i] = 2 * (i + 1);
        }

        for (int i = n / 2; i < n; i++) {
            nums[i] = 2 * (i - n / 2) + 1;
        }

        for (int i = 0; i < n; i++) {
            cout << nums[i] << " ";
        }

        cout << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}