# Objective

Write a program that calculates and prints the average rating of a list of movies. Each movie has a list of ratings from 1 to 10 (where 1 is the lowest and 10 is the highest rating). In order to compute the rating, you must remove 5% of the highest and lowest ratings before computing their average. The result must be displayed with a single decimal point.

# Implementation

The problem requires the computing of a movie rating using a truncated mean. This is a statistical measure of a central tendency where the mean is calculated after discarding parts of a probability distribution or sample at the high and low ends. Typically, this is done by removing an equal amount of points at the two ends. For this problem, you are required to remove 5% of both the highest and lowest user ratings.

A function that calculates a truncated mean for a given range should do the following:

Sort the range so that elements are ordered (either ascending or descending)
Remove the required percentage of elements at both ends
Count the sum of all remaining elements
Compute the average by dividing the sum to the remaining count of elements