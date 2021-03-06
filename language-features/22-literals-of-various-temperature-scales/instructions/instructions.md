### Objective

Write a small library that enables expressing temperatures in the three most used scales, *Celsius*, *Fahrenheit*, and *Kelvin,* and converting between them. The library must enable you to write temperature literals in all these scales, such as:
- `36.5_deg` for Celsius 
- `97.7_f` for Fahrenheit
- `309.65_K` for Kelvin

The library must also be able to perform operations with these values; and convert between them.

### Implementation

To meet this requirement, we need to provide an implementation for several types, operators, and functions:
1. An enumeration of supported temperature scales called `scale`.
2. A class template to represent a temperature value, parameterized with the scale, called `quantity.`
3. Comparison operators `==`, `!=`, `<`, `>`,`<=`, and `>=` that compare two quantities of the same time.
4. Arithmetic operators `+` and `-` that add and subtract values of the same quantity type. (Bonus: implement member operators `+=` and `-+`.)
5. A function template to convert temperatures from one scale to another, called `temperature_cast`. This function does not perform the conversion itself but uses type traits to do that.
6. Literal operators `""_deg`, `""_f`, and `""_k` for creating user-defined temperature literals.

The `are_equal()` function is a utility function used to compare floating-point values.

To convert between temperature values of different scales, we will define a function template called `temperature_cast()` that utilizes several type traits to perform the actual conversion.

The literal operators for creating temperature values should be defined in a separate namespace, called `temperature_scale_literals`, which is a good practice in order to minimize the risk of name collision with other literal operators.
