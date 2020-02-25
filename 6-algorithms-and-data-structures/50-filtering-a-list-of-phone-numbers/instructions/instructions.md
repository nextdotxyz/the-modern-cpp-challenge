# Objective

Write a function that, given a list of phone numbers, returns only the numbers that are from a specified country. The country is indicated by its phone country code, such as 44 for Great Britain. Phone numbers may start with the country code, a + followed by the country code, or have no country code. The ones from this last category must be ignored.

# Implementation

The solution to this problem is relatively simple: you have to iterate through all the phone numbers and copy to a separate container (such as an `std::vector`) the phone numbers that start with the country code. If the specified country code is, for instance, 44, then you must check for both 44 and +44. Filtering the input range in this manner is possible using the `std::copy_if()` function.