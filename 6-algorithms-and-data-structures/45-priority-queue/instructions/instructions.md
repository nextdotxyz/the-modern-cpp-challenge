# Objective

Write a data structure that represents a priority queue that provides constant time lookup for the largest element, but has logarithmic time complexity for adding and removing elements. A queue inserts new elements at the end and removes elements from the top. By default, the queue should use `operator<` to compare elements, but it should be possible for the user to provide a comparison function object that returns `true` if the first argument is less than the second. The implementation must provide at least the following operations:

`push()` to add a new element
`pop()` to remove the top element
`top()` to provide access to the top element
`size()` to indicate the number of elements in the queue
`empty()` to indicate whether the queue is empty

# Implementation

A priority queue is an abstract data type whose elements have a priority attached to them. Instead of working as a first-in-first-out container, a priority queue makes elements available in the order of their priority. This data structure is used in algorithms such as Dijkstra's shortest path, Prim's algorithm, heap sort, the A* search algorithm, in Huffman codes used for data compression, and others.

A very simple approach to implement a priority queue would be to use an `std::vector` as the underlying container of elements and always maintain it sorted. That means the maximum and minimum elements are always at the two ends. However, this approach does not provide the most efficient operations.

The most suitable data structure that can be used to implement a priority queue is a heap. This is a tree-based data structure that satisfies the following property: if P is a parent node of C, then the key (the value) of P is either greater than or equal to (in a max heap) or less than or equal to (in a min heap) the key of C.

The standard library provides several operations for working with heaps:

`std::make_heap()`: This creates a max heap for the given range, using either `operator<` or a user-provided comparison function to order the elements
`std::push_heap()`: This inserts a new element at the end of the max heap
`std::pop_heap()`: This removes the first element of the heap (by swapping the values in the first and last position and making the sub-range [first, last-1) a max heap)