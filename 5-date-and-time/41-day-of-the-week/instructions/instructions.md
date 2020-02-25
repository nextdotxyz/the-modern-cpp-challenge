# Objective

Write a function that, given a date, determines the day of the week. This function should return a value between 1 (for Monday) and 7 (for Sunday).

# Implementation

Solving this problem is again relatively straightforward if you use the `date` library. However, this time, you have to use the following types:

`date::year_month_day`, a structure that represents a day with fields for year, month (1 to 12), and day (1 to 31).
`date::iso_week::year_weeknum_weekday`, from the `iso_week.h` header, is a structure that has fields for year, number of weeks in a year, and number of days in a week (1 to 7). This class is implicitly convertible to and from `date::sys_days`, which makes it explicitly convertible to any other calendar system that is implicitly convertible to and from `date::sys_days`, such as `date::year_month_day`.
With that being said, the problem resolves to creating a `year_month_day` object to represent the desired date and then a `year_weeknum_weekday` object from it, and retrieving the day of the week with `weekday()`.