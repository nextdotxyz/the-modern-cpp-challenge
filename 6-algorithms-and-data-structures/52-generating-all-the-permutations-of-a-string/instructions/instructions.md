# Objective

Write a function that, prints on the console all the possible permutations of a given string. You should provide two versions of this function: one that uses recursion, and one that does not.

# Implementation

You can solve this problem by taking advantage of some general-purpose algorithms from the standard library. The simplest of the two required versions is the non-recursive one, at least when you use std::next_permutation(). This function transforms the input range (that is required to be sorted) into the next permutation from the set of all possible permutations, ordered lexicographically with operator< or the specified comparison function object. If such a permutation exists then it returns true, otherwise, it transforms the range into the first permutation and returns false.

The recursive alternative is a little bit more complex. One way to implement it is to have an input and output string; initially, the input string is the string for which we want to generate permutations and the output string is empty. We take one character at a time from the input string and put it in the output string. When the input string becomes empty, the output string represents the next permutation. The recursive algorithm for doing this is the following:

If the input string is empty, then print the output string and return
Otherwise iterate through all the characters in the input string, and for each element:
Call the method recursively by removing the first character from the input string and concatenating it at the end of the output string
Rotate the input string so that the first character becomes the last, the second becomes the first, and so on
This algorithm is visually explained in the following diagram:

////////////////////////////dawduaywbduywab Picture goes here

For rotating the input string, we could use the standard library function std::rotate(), which performs a left rotation on a range of elements