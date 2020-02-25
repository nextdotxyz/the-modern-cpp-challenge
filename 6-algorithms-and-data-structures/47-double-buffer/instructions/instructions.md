# Objective

Write a class that represents a buffer that could be written and read at the same time without the two operations colliding. A read operation must provide access to the old data while a write operation is in progress. Newly written data must be available for reading upon completion of the write operation.

# Implementation

The problem described here is a typical double buffering situation. Double buffering is the most common case of multiple buffering, which is a technique that allows a reader to see a complete version of the data and not a partially updated version produced by a writer. This is a common technique – especially in computer graphics – for avoiding flickering.

In order to implement the requested functionality, the buffer class that we should write must have two internal buffers: one that contains temporary data being written, and another one that contains completed (or committed) data. Upon the completion of a write operation, the content of the temporary buffer is written in the primary buffer. For the internal buffers, the implementation uses `std::vector`. When the write operation completes, instead of copying data from one buffer to the other, we just swap the content of the two, which is a much faster operation. Access to the completed data is provided with either the `read()` function, which copies the content of the read buffer into a designated output, or with direct element access (overloaded `operator[]`). Access to the read buffer is synchronized with an `std::mutex` to make it safe to read from one thread while another is writing to the buffer:

