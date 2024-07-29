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
    int n; 
    cin >> n; 

    if (n % 4 == 0) { 
        cout << n / 4 << endl; 
        return ;
    } 
    else if (n < 4) { 
        cout << 1 << endl; 
        return; 
    }
    else { 
        cout << (n / 4) + ((n % 4) / 2) << endl; 
        return; 
    }
}