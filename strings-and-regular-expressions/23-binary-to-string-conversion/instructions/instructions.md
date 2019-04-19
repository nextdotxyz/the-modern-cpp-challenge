### Objective

Write a function that, given a range of 8-bit integers (such as an array or vector), returns a `string` that contains a `hexadecimal` representation of the input data. The function should be able to produce both uppercase and lowercase content. Here are some input and output examples:

    Input: `{ 0xBA, 0xAD, 0xF0, 0x0D }`
    Output: `"BAADF00D"` or `"baadf00d"`

    Input: `{ 1,2,3,4,5,6 }
    Output: `"010203040506"`

### Implementation

In order to write a general-purpose function that can handle various sorts of ranges, such as an `std::array`, `std::vector`, a C-like array, or others, we should write a function template. There are two overloads; one that takes a container as an argument and a flag indicating the casing style, and one that takes a pair of iterators (to mark the first and then one past the end element of the range) and the flag to indicate casing. The content of the range is written to an `std::ostringstream` object, with the appropriate I/O manipulators, such as width, filling character, or case flag.