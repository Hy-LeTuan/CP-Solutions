#include <iostream> 
#include <set>
#include <unordered_set> 

using namespace std; 

int firstUniqChar(string s); 

int main() 
{ 
    string s = "codingminutes"; 
    cout << firstUniqChar(s) << endl; 
}


int firstUniqChar(string s) {
    set<char> a = {}; 

    for (char c : s) { 
        if (a.find(c) != a.end()) { 
            a.erase(a.find(c)); 
        }
        else { 
            a.insert(c); 
        }
    }


    if (a.size() > 0) { 
        for (char c : s) { 
            if (a.find(c) != a.end()) { 
                return s.find(c);
            }
        }
    }

    return -1; 
}