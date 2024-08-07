# Codeforces contest number 1999 (div 4)

## Overview

### Link: https://codeforces.com/contest/1999/

### Problems:

A. A + B Again?

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

B. Card Game

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

C. Showering

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
