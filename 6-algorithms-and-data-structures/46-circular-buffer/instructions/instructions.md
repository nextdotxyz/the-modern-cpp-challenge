# Objective

Create a data structure that represents a circular buffer of a fixed size. A circular buffer overwrites existing elements when the buffer is being filled beyond its fixed size. The class you must write should:

Prohibit default construction
Support the creation of objects with a specified size
Allow checking of the buffer capacity and status (`empty()`, `full()`, `size()`, `capacity()`)
Add a new element, an operation that could potentially overwrite the oldest element in the buffer
Remove the oldest element from the buffer
Support iteration through its elements

# Implementation

A circular buffer is a fixed-size container that behaves as if its two ends were connected to form a virtual circular memory layout. Its main benefit is that you don't need a large amount of memory to retain data, as older entries are overwritten by newer ones. Circular buffers are used in I/O buffering, bounded logging (when you only want to retain the last messages), buffers for asynchronous processing, and others.

We can differentiate between two situations:

The number of elements added to the buffer has not reached its capacity (its user-defined fixed size). In this case, it behaves likes a regular container, such as a vector.
The number of elements added to the buffer has reached and exceeded its capacity. In this case, the buffer's memory is reused and older elements are being overwritten.
We could represent such a structure using:

A regular container with a pre-allocated number of elements
A head pointer to indicate the position of the last inserted element
A size counter to indicate the number of elements in the container, which cannot exceed its capacity (since elements are being overwritten in this case)
The two main operations with a circular buffer are:

Adding a new element to the buffer. We always insert at the next position of the head pointer (or index). This is the `push()` method shown below.
Removing an existing element from the buffer. We always remove the oldest element. That element is at position `head - size` (this must account for the circular nature of the index). This is the `pop()` method shown below.