### Objective

Write a program that prints all abundant numbers and their abundance, up to a number entered by the user.

An abundant number, also known as an excessive number, is a number for which the sum of its proper divisors is greater than the number itself. The proper divisors of a number are the positive prime factors of the number, other than the number itself. The amount by which the sum of proper divisors exceeds the number itself is called abundance. 

Ex. 12 has the proper divisors 1, 2, 3, 4, and 6. Their sum is 16, which makes 12 an abundant number. Its abundance is 4 (that is, 16 - 12).

### Implementation

To determine the sum of proper divisors, we try all numbers from 2 to the square root of the number (all prime factors are less than or equal to this value). If the current number, let’s call it `i`, divides the number, then `i` and `num/i` are both divisors. However, if they are equal (for example, if `i = 3`, and `n = 9`, then `i` divides `9`, but `n/i = 3`), we add only `i` because proper divisors must only be added once. Otherwise, we add both `i` and `num/i` and continue.
