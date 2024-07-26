#include <iostream> 
#include <vector> 
#include <queue> 

using namespace std; 

int findKthLargest(vector<int> nums, int k); 

int main() 
{ 
    vector<int> nums = {53, -67, -80, -56, 53, 83, 9, 76, 50, 19, 24, 48, 12, -21, -18, -71, -75, 31, -22, 54, -87, 85, -50, -81, 10, -66, -41, 53, 26, 94, 98, 50, 8, 36, 55, 32, -19, -23, -86, -59, -89, -80, -14, -39, 54, 92, 80}; 
    cout << findKthLargest(nums, 18); 
}

int findKthLargest(vector<int> nums, int k) { 
    priority_queue<int, vector<int>, greater<int>> pq; 

    for (int i : nums) { 
        pq.push(i); 

        if (pq.size() > k) { 
            pq.pop(); 
        }
    }

    return pq.top(); 
} 