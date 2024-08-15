#include <iostream> 
#include <string> 
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
    string s; 
    cin >> ws; 
    getline(cin, s); 
    cin >> ws; 

    int sum = 0 ; 
    for (char c : s) { 
        sum += (c - '0'); 
    }

    cout << sum << endl; 
}