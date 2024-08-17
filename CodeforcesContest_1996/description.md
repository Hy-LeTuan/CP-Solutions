# Codeforces contest number 1996

## Overview

### Link: https://codeforces.com/contest/1996/

### Problems:

## A. Legs

-   ### Description

    It's another beautiful day on Farmer John's farm.

    After Farmer John arrived at his farm, he counted n
    legs. It is known only chickens and cows live on the farm, and a chicken has 2
    legs while a cow has 4.

    What is the minimum number of animals Farmer John can have on his farm assuming he counted the legs of all animals?

-   ### Input & Constraints

    The first line contains an integer t
    (1≤t≤90) — the number of test cases.

    The only line of each test case contains a single two-digit positive integer n
    (10≤n≤99).

-   ### Output

    For each test case, output a single integer — the sum of the digits of n.

-   ### Solution 

    To minimize the number of animals, we have to maximize the number of cows and minimize the number of chickens. Knowing this, we can take the number of legs (n) and do $n / 4$ to get the number of cows. 

    Then, we take the remainder of the legs and do $n / 2$ to obtain the number of chickens. It's guarantee that the remainder after $n / 4$ is divisible by 2 because chickens have 2 legs and cows have 4 legs which are all even numbers. 

## B. Legs

-   ### Description

    Tina has a square grid with n rows and n columns. Each cell in the grid is either 0 or 1.

    Tina wants to reduce the grid by a factor of k (k is a divisor of n). 

    To do this, Tina splits the grid into k×k nonoverlapping blocks of cells such that every cell belongs to exactly one block.

    Tina then replaces each block of cells with a single cell equal to the value of the cells in the block. It is guaranteed that every cell in the same block has the same value.

    For example, the following demonstration shows a grid being reduced by factor of 3.

-   ### Input & Constraints

    The first line contains t (1≤t≤100) – the number of test cases.

    The first line of each test case contains two integers n and k ($1≤n≤1000$, $1≤k≤n$, $k$ is a divisor of $n$) — the number of rows and columns of the grid, and the factor that Tina wants to reduce the grid by.

    Each of the following n lines contain n characters describing the cells of the grid. Each character is either 0 or 1. 

    It is guaranteed every k by k block has the same value.

    It is guaranteed the sum of n over all test cases does not exceed 1000.

-   ### Output

    For each test case, output the grid reduced by a factor of k on a new line.

-   ### Solution 

    It is guaranteed that $k$ is a divisor of $n$. Therefore, we can divide the $n x n$ grids into $n / k$ jumps with each jump of length $k$.  

    It is also guaranteed that every k by k block has the same value. So, we just have to get 1 character in the block to reduce the original $n x n$ grid. To accomplish this, we can loop through the grid with each step have the value of $k$ until we reach the end of the grid. Then we just need to print out the character that we landed on.  

##  C. Sort

-   ### Description

    You are given two strings $a$ and $b$ of length $n$. Then, you are (forced against your will) to answer $q$ queries.

    For each query, you are given a range bounded by $l$ and $r$. In one operation, you can choose an integer $i$ $(l ≤i ≤r)$ and set $a_{i} = x$ where $x$ is any character you desire. Output the minimum number of operations you must perform such that $sorted(a[l..r]) = sorted(b[l..r])$. The operations you perform on one query does not affect other queries. 

    For an arbitrary string $c$, $sorted(c[l..r])$ denotes the substring consisting of characters $c_{l},c_{l+1},...,c_{r}$ sorted in lexicographical order.

-   ### Input & Constraints

    The first line contains $t$ $(1≤t≤1000)$ – the number of test cases.

    The first line of each test case contains two integers $n$ and $q$ $(1≤n,q≤2⋅10^{5})$ – the length of both strings and the number of queries.

    The following line contains $a$ of length $n$. It is guaranteed $a$ only contains lowercase latin letters.

    The following line contains $b$ of length $n$. It is guaranteed $b$ only contains lowercase latin letters.

    The following $q$ lines contain two integers $l$ and $r$ $(1≤l≤r≤n)$ – the range of the query.

    It is guaranteed the sum of n and q over all test cases does not exceed  $2 ⋅10^{5}$.

-   ### Output

    For each query, output an integer, the minimum number of operations you need to perform in a new line.

-   ### Solution 
    
    For any range $[l, r]$, when we sorted both strings, the characters order will be the same on both string if the number of characters are the same. 

    This means that to count the number of operations needed, we need to count the difference between the characters of string $a$ and $b$ for range of $[l, r]$.

    To ensure optimal time complexity for this problem, we have to employ the prefix sum technique to calculate the number of times a character appears in a string for any range of $[l, r]$. 

    Finally, when looping through the number of queries, we can also loop through every character in the English alphabet (26) and then if the count of that letter in $a$ string is less than the count of that letter in $b$ string, we can add the difference into the number of operations. 

