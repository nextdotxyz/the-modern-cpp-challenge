### Objective

Considering license plates with the format `LLL-LL DDD` or `LLL-LL DDDD` (where `L` is an uppercase letter from `A to Z` and `D` is a digit), write:

    1. One function that validates that a license plate number is of the correct format.
    2. One function that, given an input text, extracts and returns all the license plate numbers found in the text.

### Implementation

The simplest way to solve this problem is by using regular expressions. The regular expression that meets the described format is `"[A-Z]{3}-[A-Z]{2} \d{3,4}"`. The first function only has to validate that an input string contains only text that matches this regular expression. For that, we can use `std::regex_match()`.

The second function is slightly different. Instead of matching the input string, it must identify all occurrences of the regular expression within the string. The regular expression would therefore change to `"([A-Z]{3}-[A-Z]{2} \d{3,4})*"`. To iterate through all matches we have to use `std::sregex_iterator`.