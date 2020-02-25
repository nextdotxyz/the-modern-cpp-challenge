# Objective

Write a function that, given a year and month, prints to the console the month calendar. The expected output format is as follows (the example is for December 2017):

```markup
Mon Tue Wed Thu Fri Sat Sun
                  1   2   3
  4   5   6   7   8   9  10
 11  12  13  14  15  16  17
 18  19  20  21  22  23  24
 25  26  27  28  29  30  31
```

# Implementation

Solving this task is actually partially based on the previous tasks. In order to print the days of the month as indicated in the problem, you should know:

What weekday is the first day of the month. This can be determined using the `week_day()` function created for a previous problem.
The number of days in the month. This can be determined using the `date::year_month_day_last` structure and retrieving the value of `day()`.
With this information determined first, you should:

Print empty values for the first week before the first weekday
Print the day number with the proper formatting from 1 to the last day of the month
Break on a new line after every seven days (counting from day 1 of the first week, even though that could belong to the previous month)