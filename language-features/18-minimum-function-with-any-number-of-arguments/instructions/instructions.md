### Objective

1. Write a function template that can take any number of arguments and returns the minimum value of them all, using `operator <` for comparison. 

2. Write a variant of this function template that can be parameterized with a binary comparison function to use instead of `operator <`.

### Implementation

It is possible to write function templates that can take a variable number of arguments using variadic function templates. For this, we need to implement compile-time recursion (which is actually just calls through a set of overloaded functions).

In order to be able to use a user-provided binary comparison function, we need to write another function template. The comparison function must be the first argument because it cannot follow the function parameter pack. On the other hand, this cannot be an overload of the previous minimum function, but a function with a different name. The reason is that the compiler would not be able to differentiate between the template parameter lists `<typename T1, typename... T>` and `<class Compare, typename T1, typename... T>.`
