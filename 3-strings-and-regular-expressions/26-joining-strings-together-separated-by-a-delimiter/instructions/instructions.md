### Objective

Write a function that, given a list of strings and a delimiter, creates a new string by concatenating all the input strings separated with the specified delimiter. The delimiter must not appear after the last string, and when no input string is provided, the function must return an empty string.

Example: 
    
    input: `{ "this","is","an","example" }` and delimiter `' '` (space) 
    output: `"this is an example"`.

### Implementation

Two overloads called `join_strings()` are listed in the following code. One takes a container of `strings` and a `pointer` to a sequence of characters representing a separator, while the other takes two random access iterators, representing the first and one past the last element of a range, and a separator. They both return a new string created by concatenating all the input strings, using an output string stream and the `std::copy` function. This general-purpose function copies all the elements in the specified range to an output range, represented by an output iterator. We are using here an `std::ostream_iterator` that uses `operator<<` to write the assigned value to the specified output stream each time the iterator is assigned a value