# Objective

Write a function that, given two dates, returns the number of days between the two dates. The function should work regardless of the order of the input dates.

# Implementation

As of C++17, the `chrono` standard library does not have support for working with dates, weeks, calendars, time zones, and other useful related features. This will change in C++20, as time zones and calendar support have been added to the standard at the Jacksonville meeting, in March 2018. The new additions are based on an open source library called `date`, built on top of `chrono`, developed by Howard Hinnant and available on GitHub at https://github.com/HowardHinnant/date. We will use this library to solve several of the problems in this chapter. Although in this implementation the namespace is `date`, in C++20 it will be part of `std::chrono`. However, you should be able to simply replace the namespace without any further code changes.

To solve this task, you could use the `date::sys_days` class, available in the `date.h` header. It represents a count of days since the `std::system_clock` epoch. This is a `time_point` with a resolution of a day and is implicitly convertible to `std::system_clock::time_point`. Basically, you have to construct two objects of this type and subtract them. The result is exactly the number of days between the two dates.