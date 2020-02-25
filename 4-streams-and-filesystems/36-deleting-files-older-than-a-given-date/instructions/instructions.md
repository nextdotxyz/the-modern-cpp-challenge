# Objective

Write a function that, given the path to a directory and a duration, deletes all the entries (files or subdirectories) older than the specified duration, in a recursive manner. The duration can represent anything, such as days, hours, minutes, seconds, and so on, or a combination of that, such as one hour and twenty minutes. If the specified directory is itself older than the given duration, it should be deleted entirely.

# Implementation

To perform filesystem operations, you should be using the `filesystem` library. For working with time and duration, you should be using the `chrono` library. A function that implements the requested functionality has to do the following:

Check whether the entry indicated by the target path exists and is older than the given duration, and if so, delete it
If it is not older and it's a directory, iterate through all its entries and call the function recursively: