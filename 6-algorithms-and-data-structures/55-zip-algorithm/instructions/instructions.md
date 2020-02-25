# Objective

Write a function that, given two ranges, returns a new range with pairs of elements from the two ranges. Should the two ranges have different sizes, the result must contain as many elements as the smallest of the input ranges. For example, if the input ranges were { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 } and { 1, 1, 3, 5, 8, 13, 21 }, the result should be {{1,1}, {2,1}, {3,3}, {4,5}, {5,8}, {6,13}, {7,21}}.

# Implementation

This problem is relatively similar to the previous one, although there are two input ranges instead of just one. The result is again a range of `std::pair`. However, the two input ranges may hold elements of different types. Again, the implementation shown here contains two overloads:

A general-purpose function with iterators as arguments. A begin and end iterator for each input range define its bounds, and an output iterator defines the position in the output range where the result must be written.
A function that takes two `std::vector` arguments, one that holds elements of type `T` and one that holds elements of type U and returns an `std::vector<std::pair<T, U>>`. This overload simply calls the previous one: