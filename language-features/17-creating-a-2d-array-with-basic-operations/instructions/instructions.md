### Objective

Write a class template that represents a two-dimensional array container with methods for:
1. element access (`at()` and `data()`)
2. capacity querying
3. iterators
4. filling
5. swapping

It should be possible to move objects of this type.

### Implementation

Note that for element access, we are using `operator()`, such as in `a(i,j)`, and not `operator[]`, such as in `a[i][j]`, because only the former can take multiple arguments (one for the index on each dimension). The latter can only have a single argument, and in order to enable expressions like `a[i][j]`, it has to return an intermediate type (one that basically represents a row) that in turn overloads `operator[]` to return a single element. 

There are already standard containers that store either fixed or variable-length sequences of elements. This two-dimensional array class should be just an adapter for such a container. In choosing between `std::array` and `std::vector`, we should consider two things:
	- The `array2d` class should have move semantics to be able to move objects 
	- It should be possible to list initialize an object of this type

The `std::array` container is movable only if the elements it holds are move-constructible and move-assignable. On the other hand, it cannot be constructed from an `std::initializer_list`. Therefore, the more viable option remains an `std::vector`.

Internally, this adapter container can store its data either in a vector of vectors (each row is a `vector<T>` with `C` elements, and the 2D array has `R` such elements stored in a `vector<vector<T>>`) or single vector of `R*c` elements of type `T`. In the latter case, the element on row `i` and column `j` is found at index `i * C + j`. This approach has a smaller memory footprint, stores all data in a single contiguous chunk, and is also simpler to implement. For these reasons, it is the preferred solution.