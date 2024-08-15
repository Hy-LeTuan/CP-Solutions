#include <iostream> 
#include <string> 
#include <queue> 
#include <vector> 

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
    string s, t; 
    string res = ""; 
    queue<char, deque<char>> q; 

    cin >> ws; 
    getline(cin, s); 
    cin >> ws; 
    getline(cin, t); 

    for (char c : t) { 
        q.push(c); 
    }
    
    for (int i = 0; i < s.length(); ++i) { 
        char c = s[i]; 
        if (!q.empty()) { 
            if (c == q.front()) { 
                res += c; 
                q.pop(); 
            }
            else if (c == '?') { 
                res += q.front(); 
                q.pop(); 
            }
            else { 
                res += c; 
            }
        }
        else { 
            if (c == '?') { 
                res += 'a'; 
            }
            else { 
                res += c; 
            }
        }
    }

    if (q.empty()) { 
        cout << "YES" << endl; 
        cout << res << endl; 
    }
    else { 
        cout << "NO" << endl; 
    }
}