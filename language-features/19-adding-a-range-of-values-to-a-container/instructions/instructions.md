### Objective

Write a general-purpose function that can add any number of elements to the end of a container that has a method `push_back(T&& value).`

### Implementation

Writing functions with any number of arguments is possible using variadic function templates. The function should have the container as the first parameter, followed by a variable number of arguments representing the values to be added at the back of the container. However, writing such a function template can be significantly simplified using fold expressions.
