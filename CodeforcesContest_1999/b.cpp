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
    int a1, a2, b1, b2; 
    cin >> a1 >> a2 >> b1 >> b2; 
    int wins = 0;

    int suneet = 0;
    int slavic = 0;
    if (a1 > b1) { 
        suneet += 1;  
    }
    else if (a1 < b1) { 
        slavic += 1; 
    }
    if (a2 > b2) { 
        suneet += 1; 
    }
    else if (a2 < b2) { 
        slavic += 1; 
    }

    if (suneet > slavic) wins++; 

    suneet = 0;
    slavic = 0; 
    if (a1 > b2) { 
        suneet++; 
    }
    else if (a1 < b2) slavic++; 
    if (a2 > b1) suneet++;
    else if (a2 < b1) slavic++; 
    if (suneet > slavic) wins++; 

    suneet = 0;
    slavic = 0; 
    if (a2 > b1) suneet++;
    if (a2 < b1) slavic++;
    if (a1 > b2) suneet++;
    if (a1 < b2) slavic++;
    if (suneet > slavic) wins++; 

    suneet = 0;
    slavic = 0; 
    if (a2 > b2) suneet++;
    if (a2 < b2) slavic++;
    if (a1 > b1) suneet++;
    if (a1 < b1) slavic++;
    if (suneet > slavic) wins++; 

    cout << wins << endl;
}