# Objective

Write a general-purpose function that, given a range, returns a new range with pairs of consecutive elements from the input range. Should the input range have an odd number of elements, the last one must be ignored. For example, if the input range was {1, 1, 3, 5, 8, 13, 21}, the result must be { {1, 1}, {3, 5}, {8, 13}}.

# Implementation

The pairwise function proposed for this problem must pair adjacent elements of an input range and produce `std::pair` elements that are added to an output range. The following code listing provides two implementations:

A general function template that takes iterators as arguments: a begin and end iterator define the input range, and an output iterator defines the position in the output range where the results are to be inserted
An overload that takes an `std::vector<T>` as the input argument and returns an `std::vector<std::pair<T, T>>` as the result; this one simply calls the first overload: