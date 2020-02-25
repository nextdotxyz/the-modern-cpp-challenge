# Objective

Write a program that, given a text, determines and prints a histogram with the frequency of each letter of the alphabet. The frequency is the percentage of the number of appearances of each letter from the total count of letters. The program should count only the appearances of letters and ignore digits, signs, and other possible characters. The frequency must be determined based on the count of letters and not the text size.

# Implementation

A histogram is a representation of the distribution of numerical data. Widely known histograms are the color and image histograms that are used in photography and image processing. A text histogram, as described here, is a representation of the frequency of letters in a given text. This problem is partially similar to the previous one, except that the range elements are characters now and we must determine the frequency of them all. To solve this problem you should:

Count the appearances of each letter using a map. The key is the letter and the value is its appearance count.
When counting, ignore all characters that are not letters. Uppercase and lowercase characters must be treated as identical, as they represent the same letter.
Use `std::accumulate(`) to count the total number of appearances of all the letters in the given text.
Use s`td::for_each()` or a range-based `for` loop to go through all the elements of the map and transform the appearance count into a frequency.