### Objective

Write a program that displays the normal binary representations, Gray code representations, and decoded Gray code values for all 5-bit numbers.

Gray code, also known as reflected binary code or simply reflected binary, is a form of binary encoding where two consecutive numbers differ by only one bit. 

### Implementation

To perform a binary reflected Gray code encoding, we need to use the following formula:
```
if b[i-1] = 1 then g[i] = not b[i]
else g[i] = b[i]
```

This is equivalent to the following:

`g = b xor (b logically right shifted 1 time)`

For decoding a binary reflected Gray code, the following formula should be used:

```
b[0] = g[0]
b[i] = g[i] xor b[i-1]
```
