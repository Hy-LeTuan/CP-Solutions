#include <iostream> 
#include <algorithm> 

using namespace std; 

void solve(); 

int main() 
{ 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    int t; 
    cin >> t; 
    while (t--) { 
        solve(); 
    }
    return 0; 
}

void solve() { 
    int n, s, m; 

    cin >> n >> s >> m;

    int prev_l; 
    int prev_r; 

    cin >> prev_l >> prev_r; 

    int max_time_interval = prev_l;  

    for (int i = 1; i < n; ++i) { 
        int l, r; 
        cin >> l >> r; 

        max_time_interval = max(max_time_interval, (l - prev_r)); 

        prev_r = r; 
        prev_l = l;     
    }

    max_time_interval = max(max_time_interval, m - prev_r); 


    if (max_time_interval >= s) {
        cout << "YES" << endl; 
    }
    else { 
        cout << "NO" << endl; 
    }
}