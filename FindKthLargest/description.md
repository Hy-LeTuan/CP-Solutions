# First Unique Character in a String

### Description

Given an integer array nums and an integer k, return the kth largest element in the array.
Note that it is the kth largest element in the sorted order, not the kth distinct element.

### Solution

Use a priority queue with a fixed size equals to k to always maintain the kth largest element at the top of the queue.
