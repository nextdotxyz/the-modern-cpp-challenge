# Objective

Write a class that enables components running in different threads to safely print log messages to the console by synchronizing access to the standard output stream to guarantee the integrity of the output. This logging component should have a method called `log()` with a string argument representing the message to be printed to the console.

# Implementation

Although C++ does not have the concept of a console and uses streams to perform input and output operations on sequential media such as files, the `std::cout` and `std::wcout` global objects control the output to a stream buffer associated with the C output stream `stdout`. These global stream objects cannot be safely accessed from different threads. Should you need that, you must synchronize the access to them. That is exactly the purpose of the requested component for this problem.

The `logger` class, shown as follows, uses an `std::mutex` to synchronize access to the `std::cout` object in the `log()` method. The class is implemented as a thread-safe singleton. The static method `instance()` returns a reference to a local static object (that has storage duration). In C++11, initialization of a static object happens only once, even if several threads attempt to initialize the same static object at the same time. In such a case, concurrent threads are blocked until the initialization executed on the first calling thread completes. Therefore, there is no need for additional user-defined synchronization mechanisms.