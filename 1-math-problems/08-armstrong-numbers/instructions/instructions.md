### Objective

Write a program that prints all Armstrong numbers with three digits.

An Armstrong number (named so after Michael F. Armstrong), also called a narcissistic number, a pluperfect digital invariant, or a plus perfect number, is a number that is equal to the sum of its own digits when they are raised to the power of the number of digits. As an example, the smallest Armstrong number is 153, which is equal to `1^3 + 5^3 + 3^3`.

### Implementation

To determine if a number with three digits is a narcissistic number, you must first determine its digits in order to sum their powers. However, this involves division and modulo operations, which are expensive. 

A much faster way to compute it is to rely on the fact that a number is a sum of digits multiplied by 10 at the power of their zero-based position. In other words, for numbers up to 1,000, we have `a*10^2 + b*10^2 + c`. Since you are only supposed to determine numbers with three digits, that means `a` would start from 1. This would be faster than other approaches because multiplications are faster to compute than divisions and modulo operations.
