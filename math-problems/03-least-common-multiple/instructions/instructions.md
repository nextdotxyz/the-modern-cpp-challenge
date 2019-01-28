### Objective

Write a program that will, given two or more positive integers, calculate and print the least common multiple of them all.

The **least common multiple (lcm)** of two or more non-zero integers, also known as the lowest common multiple, or smallest common multiple, is the smallest positive integer that is divisible by all of them.

### Implementation

A possible way to compute the least common multiple is by reducing the problem to computing the greatest common divisor. 

The following formula is used in this case:

```
lcm(a, b) = abs(a, b) / gcd(a, b)
```
