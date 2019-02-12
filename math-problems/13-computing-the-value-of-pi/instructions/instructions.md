### Objective

Write a program that computes the value of Pi with a precision of two decimal digits.

A suitable solution for approximately determining the value of Pi is using a Monte Carlo simulation. This is a method that uses random samples of inputs to explore the behavior of complex processes or systems. The method is used in a large variety of applications and domains, including physics, engineering, computing, finance, business, and others.

### Implementation

To do this we will rely on the following idea: the area of a circle with diameter `d` is `PI * d^2 / 4`. 

The area of a square that has the length of its sides equal to `d` is `d^2`. If we divide the two we get `PI/4`. If we put the circle inside the square and generate random numbers uniformly distributed within the square, then the count of numbers in the circle should be directly proportional to the circle area, and the count of numbers inside the square should be directly proportional to the square’s area. That means that dividing the total number of hits in the square and circle should give `PI/4`. The more points generated, the more accurate the result shall be.

For generating pseudo-random numbers we will use a Mersenne twister and a uniform statistical distribution.
