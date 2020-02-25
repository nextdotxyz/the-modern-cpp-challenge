# Objective

Write a function that can measure the execution time of a function (with any number of arguments) in any required duration (such as seconds, milliseconds, microseconds, and so on).

# Implementation

To measure the execution time of a function, you should retrieve the current time before the function execution, execute the function, then retrieve the current time again and determine how much time passed between the two time points. For convenience, this can all be put in a `variadic` function template that takes as arguments the function to execute and its arguments, and:

Uses `std::high_resolution_clock` by default to determine the current time.
Uses `std::invoke()` to execute the function to measure, with its specified arguments.
Returns a duration and not a number of ticks for a particular duration. This is important so that you don't lose resolution. It enables you to add execution time duration of various resolutions, such as seconds and milliseconds, which would not be possible by returning a tick count: