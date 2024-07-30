#include <iostream> 
#include <queue> 

using namespace std; 

int maximumScore(int a, int b, int c); 

int main() 
{ 
    int a = 2, b = 4, c = 6; 
    cout << maximumScore(a,b, c) << endl; 
}


int maximumScore(int a, int b, int c) {
    int score = 0; 

    priority_queue<int, vector<int>, less<int>> pq; 

    pq.push(a); 
    pq.push(b); 
    pq.push(c); 

    while (pq.size() > 1) { 
        int first = pq.top(); 
        pq.pop(); 
        int second = pq.top(); 
        pq.pop(); 

        score++; 
        first--; 
        second--; 

        if (first > 0) pq.push(first); 
        if (second > 0) pq.push(second); 
    }

    return score; 
}