#include <iostream> 
#include <string> 
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
    int n, q; 
    cin >> n >> q; 
    string a, b; 
    cin >> ws; 
    getline(cin, a); 
    getline(cin, b); 

	vector<vector<pair<int, int>>> presum(26, vector<pair<int, int>>(n + 1)); 

	for (int i = 0; i < 26; i++) { 
		presum[i][0].first = 0; 
		presum[i][0].second = 0; 
	} 
	
	for (int r = 0; r < 26; r++) { 
		for (int i = 1; i <= n; i++) { 
			int char_index_a = a[i - 1] - 'a'; 
			int char_index_b = b[i - 1] - 'a'; 

			if (r == char_index_a && r == char_index_b) { 
				presum[r][i].first = presum[r][i - 1].first + 1; 
				presum[r][i].second = presum[r][i - 1].second + 1; 
			}
			else if (r == char_index_a) { 
				presum[r][i].first = presum[r][i - 1].first + 1; 
				presum[r][i].second = presum[r][i - 1].second;  
			} 
			else if (r == char_index_b) { 
				presum[r][i].second = presum[r][i - 1].second + 1; 
				presum[r][i].first = presum[r][i - 1].first; 
			} 
			else { 
				presum[r][i].first = presum[r][i - 1].first; 
				presum[r][i].second = presum[r][i - 1].second; 
			}
		} 
	} 

	// for (int r = 0; r < 26; r++) { 
		// cout << "Character a " << r << endl; 
		// for (pair<int, int> x : presum[r]) { 
			// cout << "A has count: " << x.first << " " << "B has count: " << x.second << endl; 
		// }
	// } 

    for (int x = 0; x < q; ++x) { 
        int l, r; 
        cin >> l >> r; 
		int operations = 0; 

		for (int i = 0; i < 26; i++) { 
			int c_count_a = presum[i][r].first - presum[i][l - 1].first; 
			int c_count_b = presum[i][r].second - presum[i][l - 1].second; 
			
			if (c_count_b > c_count_a) operations += (c_count_b - c_count_a); 
		} 

		cout << operations << endl; 
    }
}
