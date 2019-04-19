### Objective

Write a function that transforms an input text into a capitalized version, where every word starts with an uppercase letter and has all the other letters in lowercase. For instance, the text `"the c++ challenger"` should be transformed to `"The C++ Challenger"`.

### Implementation

The function template `capitalize()`, should work with strings of any type of characters. It does not modify the input string but creates a new string. To do so, it uses an `std::stringstream`. It iterates through all the characters in the input string and sets a flag indicating a new word to `true` every time a space or punctuation is encountered. Input characters are transformed to uppercase when they represent the first character in a word and to lowercase otherwise.