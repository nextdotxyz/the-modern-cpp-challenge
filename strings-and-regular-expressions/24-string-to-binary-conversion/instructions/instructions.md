### Objective

Write a function that, given a `string` containing `hexadecimal` digits as the input argument, returns a vector of 8-bit integers that represent the numerical deserialization of the string content. The following are examples:

    Input: `"BAADF00D"` or `"baadF00D"`
    Output: `{0xBA, 0xAD, 0xF0, 0x0D}`

    Input: `"010203040506"`
    Output: `{1, 2, 3, 4, 5, 6}`

### Implementation

The operation requested here is the opposite of the one implemented in the previous problem. This time, however, we could write a function and not a function template. The input is an `std::string_view`, which is a lightweight wrapper for a sequence of characters. The output is a vector of 8-bit unsigned integers. The `hexstr_to_bytes` function should transform every two text characters into an `unsigned char` value (`"A0"` becomes `0xA0`), puts them into an `std::vector`, and returns the vector.