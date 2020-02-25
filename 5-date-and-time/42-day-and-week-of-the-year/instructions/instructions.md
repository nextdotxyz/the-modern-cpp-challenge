# Objective

Write a function that, given a date, returns the day of the year (from 1 to 365 or 366 for leap years) and another function that, for the same input, returns the calendar week of the year.

# Implementation

The solution to this two-part problem should be straightforward from the previous two:

To compute the day of the year, you subtract two `date::sys_days objects`, one representing the given day and the other January 0 of the same year. Alternatively, you could start from January 1 and add 1 to the result.
To determine the week number of the year, construct a `year_weeknum_weekday` object, like in the previous problem, and retrieve the `weeknum()` value: