# Objective

Write a function that, given a range, returns the most frequent element and the number of times it appears in the range. If more than one element appears the same maximum number of times then the function should return all the elements. For instance, for the range {1,1,3,5,8,13,3,5,8,8,5}, it should return {5, 3} and {8, 3}.

# Implementation

In order to determine and return the most frequent element in a range you should do the following:

Count the appearances of each element in an `std::map`. The key is the element and the value is its number of appearances.
Determine the maximum element of the map using `std::max_element()`. The result is a map element, that is, a pair containing the element and its number of appearances.
Copy all map elements that have the value (appearance count) equal to the maximum element's value and return that as the final result.