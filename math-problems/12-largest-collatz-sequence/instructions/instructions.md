### Objective

Write a program that determines and prints which number up to 1 million produces the longest Collatz sequence and what its length is.

The Collatz conjecture, also known as the Ulam conjecture, Kakutani's problem, the Thwaites conjecture, Hasse's algorithm, or the Syracuse problem, is an unproven conjecture that states that a sequence defined as explained in the following always reaches 1. The series is defined as follows: start with any positive integer n and obtain each new term from the previous one: if the previous term is even, the next term is half the previous term, or else it is 3 times the previous term plus 1.

### Implementation

The problem you are to solve is to generate the Collatz sequence for all positive integers up to one million, determine which of them is the longest, and print its length and the starting number that produced it. Although we could apply brute force to generate the sequence for each number and count the number of terms until reaching 1, a faster solution would be to save the length of all the sequences that have already been generated. When the current term of a sequence that started from a value n becomes smaller than n, then it is a number whose sequence has already been determined, so we could simply fetch its cached length and add it to the current length to determine the length of the sequence started from n. This approach, however, introduces a limit to the Collatz sequences that could be computed, because at some point the cache will exceed the amount of memory the system can allocate.
