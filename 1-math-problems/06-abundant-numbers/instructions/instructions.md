### Objective

Write a program that prints all __abundant numbers__ and their __abundance__, up to a number entered by the user.

An __abundant number__, also known as an __excessive number__, is a number for which the sum of its __proper divisors__ is greater than the number itself. The __proper divisors__ of a number are the positive prime factors of the number, other than the number itself. The amount by which the sum of proper divisors exceeds the number itself is called __abundance__. 

__Ex.__ 12 has the proper divisors 1, 2, 3, 4, and 6. Their sum is 16, which makes 12 an abundant number. Its abundance is 4 (that is, 16 - 12).

### Implementation

To determine the sum of proper divisors, we try all numbers from __2__ to the __square root__ of the number (all prime factors are less than or equal to this value). If the current number, let’s call it `i`, divides the number, then `i` and `num/i` are both divisors. However, if they are equal (for example, if `i = 3`, and `n = 9`, then `i` divides `9`, but `n/i = 3`), we add only `i` because proper divisors must only be added once. Otherwise, we add both `i` and `num/i` and continue.
