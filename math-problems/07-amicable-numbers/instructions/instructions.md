### Objective

Write a program that prints the list of all pairs of amicable numbers smaller than 1,000,000. 

Two numbers are said to be amicable if the sum of the proper divisors of one number is equal to that of the other number. The proper divisors of a number are the positive prime factors of the number other than the number itself. Amicable numbers should not be confused with friendly numbers. 

For instance, the number 220 has the proper divisors 1, 2, 4, 5, 10, 11, 20, 22, 44, 55, and 110, whose sum is 284. The proper divisors of 284 are 1, 2, 4, 71, and 142; their sum is 220. Therefore, the numbers 220 and 284 are said to be amicable.

### Implementation

The solution to this problem is to iterate through all the numbers up to the given `limit`. For each number, compute the sum of its proper divisors. Let’s call this `sum1`. Repeat the process and compute the sum of the proper divisors of `sum1`. If the result is equal to the original number, then the number and `sum1` are amicable numbers.

Make sure not to print the same pair twice, ex. **220,284** and **284,220** are the same pair.
