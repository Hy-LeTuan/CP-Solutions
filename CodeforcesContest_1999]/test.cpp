#include <iostream> 
#include <cmath> 

using namespace std; 

int main() 
{ 
    cout << floor(log(19) / log(3)) + 1 + floor(log(20 * 3 * 3 * 3) / log(3)) + 1 << endl; 
    cout <<  2 * (floor(log(19) / log(3)) + 1) + floor(log(20) / log(3)) + 1 << endl; 
}