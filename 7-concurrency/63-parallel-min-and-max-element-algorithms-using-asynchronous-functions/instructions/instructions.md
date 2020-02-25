# Objective

Implement general-purpose parallel algorithms that find the minimum value and, respectively, the maximum value in a given range. The parallelism should be implemented using asynchronous functions, although the number of concurrent functions is an implementation detail.

# Implementation

The only difference between this problem and the previous one is how the parallelism is achieved. For the previous problem, the use of threads was required. For this one, you must use asynchronous functions. A function can be executed asynchronously with `std::async()`. This function creates a **promise**, which is an asynchronous provider of the result of a function executed asynchronously. A promise has a shared state (which can store either the return value of a function or an exception that resulted from the execution of the function) and an associated future object that provides access to the shared state from a different thread. The promise-future pair defines a channel that enables communicating values across threads. `std::async()` returns the future associated with the promise it creates.