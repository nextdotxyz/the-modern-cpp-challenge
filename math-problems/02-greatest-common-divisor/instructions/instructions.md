### Objective

Write a program that, given two positive integers, will calculate and print the greatest common divisor of the two.

The **greatest common divisor (gcd in short)** of two or more non-zero integers, also known as the greatest common factor (**gcf**), highest common factor (**hcf**), greatest common measure (**gcm**), or highest common divisor, is the greatest positive integer that divides all of them.

### Implementation

There are several ways the gcd could be computed; an efficient method is Euclid's algorithm. 

For two integers, the algorithm is:

```
gcd(a,0) = a
gcd(a,b) = gcd(b, a mod b)
```
