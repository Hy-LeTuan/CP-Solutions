# Maximum Score From Removing Stones

### Description

You are playing a solitaire game with three piles of stones of sizes a​​​​​​, b,​​​​​​ and c​​​​​​ respectively. Each turn you choose two different non-empty piles, take one stone from each, and add 1 point to your score. The game stops when there are fewer than two non-empty piles (meaning there are no more available moves).

Given three integers a​​​​​, b,​​​​​ and c​​​​​, return the maximum score you can get.

##### Constraints: 1 <= a, b, c <= 10^5

### Solution

To get the highest score, we must maintain at least 2 non-empty piles of stone for as long as possible. Intuitively, we will aim to cut down the tallest piles first, and then go for the lower ones later. This way, it guarantees that there will always be 3 non-empty piles until the smallest pile reaches 0. To always pick the pile with the most stones, we use a max heap. While the length of the max heap is greater than 1, we can take the first and second element out from the heap, subtract them by 1, increase our score and check whether the subtracted height is greater than 0 or not. If a pile's height reaches 0, we don't add it to the stack, and the opposite happens if the height is greater than 0.
