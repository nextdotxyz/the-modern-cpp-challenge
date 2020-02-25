# Objective

Write a function that computes the size of a directory, in bytes, recursively. It should be possible to indicate whether symbolic links should be followed or not.

# Implementation

To compute the size of a directory, we have to iterate through all the files and sum the size of individual files.

`filesystem::recursive_directory_iterator` is an iterator from the `filesystem` library that allows iterating all the entries of a directory in a recursive manner. It has various constructors, some of them taking a value of the type `filesystem::directory_options` that indicates whether symbolic links should be followed or not. The general purpose `std::accumulate()` algorithm can be used to sum together the file sizes. Since the total size of a directory could exceed 2 GB, you should not use `int` or `long`, but `unsigned long long` for the sum type.