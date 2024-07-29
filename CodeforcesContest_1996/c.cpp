#include <iostream> 
#include <string> 
#include <algorithm> 
#include <unordered_map>

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


    for (int i = 0; i < q; ++i) { 
        int l, r; 
        cin >> l >> r; 

        string sub_b = b.substr(l - 1, (r - l + 1)); 
        string sub_a = a.substr(l - 1, (r - l + 1)); 

        unordered_map<char, int> b_char_count = {}; 
        unordered_map<char, int> a_char_count = {}; 

        int operations = 0; 

        for (int i = 0; i < sub_a.length(); i++) { 
            char a_char = sub_a[i]; 
            char b_char = sub_b[i]; 

            if (b_char_count.find(b_char) != b_char_count.end()) { 
                b_char_count[b_char] += 1; 
            } else { 
                b_char_count[b_char] = 1; 
            }

            if (a_char_count.find(a_char) != a_char_count.end()) { 
                a_char_count[a_char] += 1; 
            } else { 
                a_char_count[a_char] = 1; 
            }
        }

        for (const auto& pair : b_char_count) { 
            char b_char = pair.first; 

            if (a_char_count.find(b_char) == a_char_count.end()) { 
                operations += b_char_count[b_char]; 
                // cout << "Character: " << b_char << " added directly to operations value of " << b_char_count[b_char] << endl; 
            } else { 
                if (a_char_count[b_char] <= b_char_count[b_char]) { 
                    operations += (b_char_count[b_char] - a_char_count[b_char]); 
                    // cout <<"Character: " << b_char << " added by subtractiong " << b_char_count[b_char] << " from " << a_char_count[b_char] << endl; 
                }
            }
        }

        cout << operations << endl; 
    }
}
