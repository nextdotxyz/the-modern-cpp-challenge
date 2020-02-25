# Objective

Write a program that, given the path to a text file, modifies the file by removing all empty lines. Lines containing only whitespaces are considered empty.

# Implementation

A possible approach to solving this task is to do the following:
    Create a temporary file to contain only the text you want to retain from the original file
    Read line by line from the input file and copy to the temporary file all lines that are not empty
    Delete the original file after finishing processing it
    Move the temporary file to the path of the original file