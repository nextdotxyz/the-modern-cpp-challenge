# Objective

Implement general-purpose parallel algorithms that find the minimum value and, respectively, the maximum value in a given range. The parallelism should be implemented using threads, although the number of concurrent threads is an implementation detail.

# Implementation

This problem, and its solution, is similar in most ways to the previous one. What is slightly different is that the function concurrently executing on each thread must return a value that represents the minimum or the maximum element in the subrange. The `pprocess()` function template, shown as follows, is a higher-level function that implements the requested functionality generically, in the following way:

Its arguments are the first and one-past-last iterators to the range and a function object that processes the range that we will call `f`.
If the size of the range is smaller than a particular threshold, set to 10,000 elements here, it simply executes the function object `f` received as argument.
Otherwise, it splits the input range into a number of subranges of equal size, one for each concurrent thread that could be executed. Each thread runs `f` for the selected subrange.
The results of the parallel execution of `f` are collected in an `std::vector`, and after the execution of all threads is completed, `f` is used again to determine the overall result from the intermediate results: