# Codeforces contest number 1999 (div 4)

## Overview

### Link: https://codeforces.com/contest/1999/

### Problems:

## A. A + B Again?

-   ### Description
    Given a two-digit positive integer n, find the sum of its digits.
-   ### Input & Constraints

    The first line contains an integer t
    (1≤t≤90
    ) — the number of test cases.

    The only line of each test case contains a single two-digit positive integer n
    (10≤n≤99
    ).

-   ### Output

    For each test case, output a single integer — the sum of the digits of n.

-   ### Solution

    First, we can get the integer as a string, so that we can loop through each of its digits. While looping through the digits, transform them from character to integer by subtracting them from the character '0'. Then add their value and we will have the answer.

## B. Card Game

-   ### Description

    Suneet and Slavic play a card game. The rules of the game are as follows:

    -   Each card has an integer value between 1 and 10
    -   Each player receives 2 cards which are face-down (so a player doesn't know their cards).

        The game is turn-based and consists exactly of two turns. In a round, both players pick a random unflipped card and flip it. The player who flipped a card with a strictly greater number wins the round. In case of equality, no one wins the round.

        A player wins a game if he wins the most number of rounds (i.e. strictly greater than the other player). In case of equality, no one wins the game.
        Since Suneet and Slavic aren't best friends, you need to calculate the number of ways the game could happen that Suneet would end up as the winner.

-   ### Input & Constraints

    The first line contains an integer t
    (1≤t≤10) — the number of test cases. The first and only line of each test case contains 4 integers a1, a2, b1, b2 (1≤a1,a2,b1,b2≤10) where a1 and a2 represent the cards Suneet has, and b1 and b2 represent the cards Slavic has, respectively.

-   ### Output

    For each test case, output a single integer — the number of games Suneet would win considering all possible games.

-   ### Solution

    For each game, there are 4 scenarios shared between 2 rounds:

    -   a1 vs b1 and a2 vs b2
    -   a2 vs b1 and a1 vs b2
    -   a2 vs b2 and a1 vs b1
    -   a1 vs b2 and a2 vs b1

    Based on these scenarios, we can implement a point counting system for Suneet and Slavic. If Suneet wins, we increase his score by 1, and vice versa for Slavic. If a round is a tie, we keep the score the same. After each scenario, if Suneet has more points than Slavic, he wins that game and we increase the number of games won by 1.

## C. Showering

-   ### Description

    As a computer science student, Alex faces a hard challenge — showering. He tries to shower daily, but despite his best efforts there are always challenges. He takes s minutes to shower and a day only has m minutes!

    He already has n tasks planned for the day. Task i is represented as an interval (li, ri), which means that Alex is busy and can not take a shower in that time interval (at any point in time strictly between li and ri). No two tasks overlap.

    Given all n time intervals, will Alex be able to shower that day? In other words, will Alex have a free time interval of length at least s?

-   ### Input & Constraints

    The first line contains a single integer t (1≤t≤104) — the number of test cases.

    The first line of each test case contains three integers n, s, and m(1≤n≤2⋅105; 1≤s,m≤109) — the number of time intervals Alex already has planned, the amount of time Alex takes to take a shower, and the amount of minutes a day has.

    Then n lines follow, the i-th of which contains two integers li and ri(0≤li<ri≤m) — the time interval of the i-th task. No two tasks overlap. Additional constraint on the input: li>ri−1 for every i>1

    The sum of n over all test cases does not exceed 2⋅105

-   ### Output

    For each test case output "YES" (without quotes) if Alex can take a shower for that given test case, and "NO" (also without quotes) otherwise.

    You can output "YES" and "NO" in any case (for example, strings "yEs", "yes", and "Yes" will be recognized as a positive response).

-   ### Solution

    The problem was very generous because the intervals provided were already in linear time order.

    From that, we can calculate the maxium free time Alex has by taking start time of the next interval and minus the end time of the current interval. We also need to include Alex's freet ime from the start of the day to the first interval, and his free time from the last interval to the end of the day.

    Finally, we can check if the maximum free time he has is larger than the shower time. If it is larger, print yes, else, we print no.

## D. Slavic's Exam

-   ### Description

    Slavic has a very tough exam and needs your help in order to pass it. Here is the question he is struggling with:

    There exists a string s, which consists of lowercase English letters and possibly zero or more "?".

    Slavic is asked to change each "?" to a lowercase English letter such that string t becomes a subsequence (not necessarily continuous) of the string s.

    Output any such string, or say that it is impossible in case no string that respects the conditions exists.

-   ### Input & Constraints

    The first line contains a single integer T
    $(1≤T≤104)$ — the number of test cases.

    The first line of each test case contains a single string s ($1≤|s|≤2⋅105$, and s consists only of lowercase English letters and "?"-s) – the original string you have.

    The second line of each test case contains a single string t
    ($1≤\lvert t \rvert ≤ \lvert s \rvert$, and t consists only of lowercase English letters) – the string that should be a subsequence of string s.

    The sum of $\lvert s \rvert$ over all test cases doesn't exceed $2⋅10^{5}$, where $\lvert x \rvert$ denotes the length of the string x.

-   ### Output

    For each test case, if no such string exists as described in the statement, output "NO" (without quotes).

    Otherwise, output "YES" (without quotes). Then, output one line — the string that respects all conditions.

    You can output "YES" and "NO" in any case (for example, strings "yEs", "yes", and "Yes" will be recognized as a positive response).

    If multiple answers are possible, you can output any of them.

-   ### Solution

    The problems require us to turn the `?` character in string s to any random English letter so that it contains enough letter in `t` in a specific order. We can use a queue to maintian the specific character orders of `t` that must appear in `s`. After that, we loop through `s` and check if `t` is already in s. If it is, we can add the current character to the output string if it's a normal character, and a random character if the current letter is `?`. Else if the condition is not met, we will check if the current letter matches the first letter of the queue. If it matches, or the current character is `?` we remove the first charcter from the queue and add it to the output string. After the loop, if the queue is empty then `t` is in `s` and we output the new string.

## E. Triple Operations

-   ### Description

    On the board Ivy wrote down all integers from l to r, inclusive.

    In an operation, she does the following: pick two numbers x
    and y on the board, erase them, and in their place write the numbers $3x$
    and $⌊\frac{y}{3}⌋$. (Here ⌊∙⌋ denotes rounding down to the nearest integer). What is the minimum number of operations Ivy needs to make all numbers on the board equal 0?

-   ### Input & Constraints

    The first line contains an integer t
    $(1≤t≤104)$ — the number of test cases.

    The only line of each test case contains two integers l and r $(1≤l<r≤2⋅105)$

-   ### Output

    For each test case, output a single integer — the minimum number of operations needed to make all numbers on the board equal 0.

-   ### Solution

    The problem requires all number to be 0, which is impossible to do if we apply the $3x$ operations on $x > 0$.

    Therefore, the most straight forward way to resolve this is to turn 1 number to 0 first, then using 0 for the $3x$ operations and using the $\lfloor \frac{y}{3} \rfloor$ operation.

    The least number of operations to turn a number to 0 with the $\lfloor \frac{y}{3} \rfloor$ operation is $\lfloor \log_3(x) \rfloor + 1$.

    To also solve the optimization issue, we can use prefix sum to compute the number of operations for sequence of numbers.

    Then with any `l` and `r`, we can do the prefix sum of `r` $-$ prefix sum of `l` and then add the cost to reduce `l` to zero since `l` is the smallest number in the sequence.
