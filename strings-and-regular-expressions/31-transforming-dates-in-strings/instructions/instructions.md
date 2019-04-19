### Objective

Write a function that, given a text containing dates in the format `dd.mm.yyyy` or `dd-mm-yyyy`, transforms the text so that it contains dates in the format `yyyy-mm-dd`.

### Implementation

Text transformation can be performed with regular expressions using `std::regex_replace()`. A regular expression that can match dates with the specified formats is `(\d{1,2})(\.|-|/)(\d{1,2})(\.|-|/)(\d{4})`. This regex defines five capture groups; the 1st is for the day, the 2nd is for the separator (`.` or `-`), the 3rd is for the month, the 4th is again for the separator (`.` or `-`), and the 5th is for the year.

Since we want to transform dates from the format `dd.mm.yyyy` or `dd-mm-yyyy` to `yyyy-mm-dd`, the regex replacement format string for `std::regex_replace()` should be `"($5-$3-$1)"`.