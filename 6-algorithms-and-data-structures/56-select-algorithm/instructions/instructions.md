# Objective

Write a function that, given a range of values and a projection function, transforms each value into a new one and returns a new range with the selected values. For instance, if you have a type book that has an id, title, and author, and have a range of such book values, it should be possible for the function to select only the title of the books. Here is an example of how the function should be used:

```c++
struct book
{
   int         id;
   std::string title;
   std::string author;
};

std::vector<book> books{
   {101, "The C++ Programming Language", "Bjarne Stroustrup"},
   {203, "Effective Modern C++", "Scott Meyers"},
   {404, "The Modern C++ Programming Cookbook", "Marius Bancila"}};

auto titles = select(books, [](book const & b) {return b.title; });
```

# Implementation

The `select()` function that you have to implement takes an `std::vector<T>` as an input argument and a function of type `F` and returns a `std::vector<R>` as the result, where `R` is the result of applying `F` to `T`. We could use `std::result_of()` to deduce the return type of an invoke expression at compile time. Internally, the `select()` function should use `std::transform()` to iterate over the elements of the input vector, apply function `f` to each element, and insert the result in an output vector.