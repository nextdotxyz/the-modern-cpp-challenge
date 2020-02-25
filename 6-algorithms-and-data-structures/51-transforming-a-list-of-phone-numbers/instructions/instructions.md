# Objective

Write a function that, given a list of phone numbers, transforms them so they all start with a specified phone country code, preceded by the + sign. Any whitespaces from a phone number should also be removed. The following is a list of input and output examples:

```markup
07555 123456    => +447555123456
07555123456     => +447555123456
+44 7555 123456 => +447555123456
44 7555 123456  => +447555123456
7555 123456     => +447555123456
```

# Implementation

This problem is somewhat similar in some aspects to the previous one. However, instead of selecting phone numbers that start with a specified country code, we must transform each number so that they all start with that country code preceded by a `+`. There are several cases that must be considered:

The phone number starts with a 0. That indicates a number without a country code. To modify the number to include the country code we must replace the 0 with the actual country code, preceded by `+`.
The phone number starts with the country code. In this case, we just prepend `+` sign to the beginning.
The phone number starts with `+` followed by the country code. In this case, the number is already in the expected format.
None of these cases applies, therefore the result is obtained by concatenating the country code preceded by `+` and the phone number. 

>For simplicity, we will ignore the possibility that the number is actually prefixed with another country code. You can take it as a further exercise to modify the implementation so that it can handle phone numbers with a different country prefix. These numbers should be removed from the list.

In all of the preceding cases, it is possible that the number could contain spaces. According to the requirements, these must be removed. The `std::remove_if()` and `isspace()` functions are used for this purpose.