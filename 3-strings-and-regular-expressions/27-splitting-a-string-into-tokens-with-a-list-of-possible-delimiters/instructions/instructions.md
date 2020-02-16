### Objective

Write a function that, given a string and a list of possible delimiter characters, splits the string into tokens separated by any of the delimiters and returns them in an `std::vector`.

Example: 
    
    input: `"this,is.a sample!!"` with delimiters `",.! "`
    output: `{"this", "is", "a", "sample"}`.



### Implementation

Two different versions of a splitting function are listed as follows:

1. The first one uses a single character as the delimiter. To split the input string it uses a string stream initialized with the content of the input string, using `std::getline()` to read chunks from it until the next delimiter or an end-of-line character is encountered.
2. The second one uses a list of possible character delimiters, specified in an `std::string`. It uses `std:string::find_first_of()` to locate the first position of any of the delimiter characters, starting from a given position. It does so in a loop until the entire input string is being processed. The extracted substrings are added to the result vector.