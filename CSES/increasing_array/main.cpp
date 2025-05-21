
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

void solve() {
    int n;
    cin >> n;

    vector<int> nums(n, 0);

    ll res = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        nums[i] = x;

        if (i > 0) {
            if (nums[i] < nums[i - 1]) {
                res += abs(nums[i] - nums[i - 1]);
                nums[i] = nums[i - 1];
            }
        }
    }

    cout << res << endl;
}

int main() {
    solve();
}