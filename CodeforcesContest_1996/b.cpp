#include <iostream> 

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
     
    int res[500][500]; 
    int grid[500][500]; 

    for (int i = 1; i <= n; ++i) { 
        for (int j = 1; j <= n; ++j) { 
            char x; 
            cin >> x; 
            grid[i][j] = x - '0'; 
        }
    }

    if (k == 1) 
    { 
        for (int i = 1; i <= n; ++i) { 
            for (int j = 1; j <= n; ++j) { 
                cout << grid[i][j]; 
            }
            cout << endl; 
        }
        return; 
    }

    for (int i = 1; i <= n / k; i++) { 
        for (int j = 1; j <= n / k; j++) { 
            int row = k * i; 
            int col = k * j; 

            // cout << "Row: " << row << " || " << "Col: " << col << "Value: " << grid[row][col] << endl; 
            res[i][j] = grid[row][col]; 
        }
    }

    for (int i = 1; i <= n / k; i++) { 
        for (int j = 1; j <= n / k; j++) { 
            cout << res[i][j]; 
        }
        cout << endl; 
    }
}
