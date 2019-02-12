### Objective

Write a program that validates that 10-digit values entered by the user, as a string, represent valid ISBN-10 numbers.

The International Standard Book Number (ISBN) is a unique numeric identifier for books. Currently, a 13-digit format is used. However, for this problem, you are to validate the former format that used 10 digits. The last of the 10 digits is a checksum. This digit is chosen so that the sum of all the ten digits, each multiplied by its (integer) weight, descending from 10 to 1, is a multiple of 11.

### Implementation
Define `validate_isbn_10` such that it:
1. Takes an ISBN as a string
2. Returns `true` if:
    a. the length of the string is **10**
    b. all ten elements are digits
    c. the sum of all digits multiplied by their weight (or position) is a multiple of **11**
