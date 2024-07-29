#include <iostream>
#include <vector>  
#include <queue> 

using namespace std; 

int solve(vector<int> nums); 

int main() 
{ 
    vector<int> nums = {1, 2, 3, 4, 5}; 
    cout << solve(nums) << endl; 

}

int solve(vector<int> nums) {
    priority_queue<int, vector<int>, greater<int>> pq; 
    int cost = 0; 

    for (int i : nums) { 
        pq.push(i); 
    }

    while (pq.size() > 1) { 
        int first = pq.top(); 
        pq.pop(); 
        int second = pq.top(); 
        pq.pop(); 

        cost += (first + second); 

        pq.push(first + second); 
    }

    return cost;    
}