# Objective

Write a general-purpose algorithm that applies a given unary function to transform the elements of a range in parallel. The unary operation used to transform the range must not invalidate range iterators or modify the elements of the range. The level of parallelism, that is, the number of execution threads and the way it is achieved, is an implementation detail.

# Implementation

The general-purpose function std::transform() applies a given function to a range and stores the result in another (or the same) range. The requirement for this problem is implementing a parallel version of such a function. A general-purpose one would take iterators as arguments to define the first and one-past-last element of the range. Because the unary function is applied in the same manner to all the elements of the range, it is fairly simple to parallelize the operation. For this task, we will be using threads. Since it is not specified how many threads should be running at the same time, we could use std::thread::hardware_concurrency(). This function returns a hint for the number of concurrent threads supported by the implementation.

A parallel version of the algorithm performs better than a sequential implementation only if the size of the range exceeds a particular threshold, which may vary with compilation options, platform, or hardware. In the following implementation that threshold is set to 10,000 elements. As a further exercise, you could experiment with various thresholds and range sizes to see how the execution time changes.