### Objective

Write a class that represents an IPv4 address. 

Implement the functions required to be able to read and write such addresses from or to the console. The user should be able to input values in dotted form, such as `127.0.0.1` or `168.192.0.100`. This is also the form in which IPv4 addresses should be formatted to an output stream.

### Implementation

The problem requires writing a class to represent an IPv4 address. This is a 32-bit value, usually represented in decimal dotted format, such as `168.192.0.100`; each part of it is an 8-bit value, ranging from **0** to **255**. 

For easy representation and handling, we can use four `unsigned char` to store the address value. Such a value could be constructed either from four `unsigned char` or from an `unsigned long`. In order to be able to read a value directly from the console (or any other input stream) and be able to write the value to the console (or any other output stream), we have to overload `operator>>` and `operator<<`.