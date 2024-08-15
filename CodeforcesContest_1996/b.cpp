#include <iostream> 
#include <vector>

using namespace std; 

void solve(); 

int main() 
{ 
    int t; 
    cin >> t; 

    while (t--) { 
        solve(); 
    }

    return 0; 
}

void solve() { 
    int n, k; 
    cin >> n >> k; 
	
	vector<vector<int>> grids(n + 1, vector<int>(n + 1));

	for (int i = 1; i <= n; ++i) { 
		for (int j = 1; j <= n; ++j) { 
			char c; 
			cin >> c; 
			grids[i][j] = c - '0'; 
		}
	}
	
	for (int i = 1; i <= n; i +=k ) {
		for (int j = 1; j <= n; j += k) { 
			cout << grids[i][j]; 
		} 
		cout << endl; 
	} 
}
