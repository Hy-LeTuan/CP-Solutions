#include <iostream> 
#include <cmath> 

using namespace std; 

const int MAX = 200'007;
int a[MAX]; 
int presum[MAX]; 

void presolve(); 
void solve(); 

int main() 
{ 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

    presolve(); 
    int t; 
    cin >> t; 
    while (t--) { 
        solve(); 
    }

    return 0; 
}

void presolve() { 
    presum[0] = 0; 
    for (int i = 1; i < MAX - 1; ++i) { 
        a[i] = floor(log10(i) / log10(3)) + 1; 
        presum[i] = presum[i - 1] + a[i]; 
    }
}

void solve() { 
    int l, r; 
    cin >> l >> r; 
    cout << presum[r] - presum[l - 1] + a[l] << endl;  
}