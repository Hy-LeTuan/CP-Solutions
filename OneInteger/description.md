# One Integer

### Description

You are given a list of integers nums. You can reduce the length of nums by taking any two integers, removing them, and appending their sum to the end. The cost of doing this is the sum of the two integers you removed.

Return the minimum total cost of reducing nums to one integer.

##### Note : Cost can be negative also.

##### Constraints: n ≤ 100,000 where n is length of nums.

### Solution

For a list of integers of length n, the number of operations required to reduce the list to an integer is fixed regardless of our order of operations. Following that logic, we can implement a greedy algorithm that aims to do as many cheap operations as possible. To accomplish this goal, we use a priority queue to maintain the 2 smallest elements in the list while simultaneously popping them out and pushing in their sum.
