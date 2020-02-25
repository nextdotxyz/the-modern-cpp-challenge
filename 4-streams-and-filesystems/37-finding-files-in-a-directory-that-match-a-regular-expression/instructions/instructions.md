# Objective

Write a function that, given the path to a directory and a regular expression, returns a list of all the directory entries whose names match the regular expression.

# Implementation

Implementing the specified functionality should be straightforward: iterate recursively through all the entries of the specified directory and retain all the entries that are regular files and whose name matches the regular expression. To do that, you should use the following:

`filesystem::recursive_directory_iterator` to iterate through directory entries
`regex` and `regex_match()` to check whether the filename matches the regular expression
`copy_if()` and `back_inserter` to copy, at the end of a `vector`, the directory entries that match a specific criteria.