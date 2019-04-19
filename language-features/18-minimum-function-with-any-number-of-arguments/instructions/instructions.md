### Objective

Write a function template that can take any number of arguments and returns the minimum value of them all, using `operator <` for comparison. 

### Implementation

It is possible to write function templates that can take a variable number of arguments using variadic function templates. For this, we need to implement compile-time recursion (which is actually just calls through a set of overloaded functions).
