
#include <bits/stdc++.h>

using namespace std;

#define inp(n) int n; cin >> n;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vii;


void solve() {
    inp(n);

    if (n % 4 == 0 || (n - 3) % 4 == 0) {
        cout << "YES" << endl;
        bool pure = n % 4 == 0;

        vii firstSet;
        vii secondSet;

        int left;
        int right;
        bool addFirstSet = false;

        if (pure) {
            left = 1;
            right = n;
        } else {
            firstSet.push_back(1);
            firstSet.push_back(2);
            secondSet.push_back(3);

            left = 4;
            right = n;
        }

        while (right >= left) {
            if (addFirstSet) {
                firstSet.push_back(left);
                firstSet.push_back(right);
            } else {
                secondSet.push_back(left);
                secondSet.push_back(right);
            }

            left++;
            right--;
            addFirstSet = !addFirstSet;
        }
        
        cout << firstSet.size() << endl;
        for (int x : firstSet) {
            cout << x << " ";
        }
        cout << endl;

        cout << secondSet.size() << endl;
        for (int x : secondSet) {
            cout << x << " ";
        }
        cout << endl;
    } else {
        cout << "NO" << endl;
        return;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}