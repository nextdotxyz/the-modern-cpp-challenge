### Objective

Consider an operating system handle, such as a file handle. Write a wrapper that handles: 
1. Explicit acquisition and automatic release of the handle when the object is destroyed
2. Move semantics to enable transfer of ownership of the handle
3. Comparison operators to check whether two objects refer to the same handle
4. Additional operations such as swapping and resetting

### Implementation

System handles are a form of reference to system resources. Because all operating systems were at least initially written in C, creating and releasing the handles is done through dedicated system functions. This increases the risk of leaking resources because of erroneous disposal, such as in the case of an exception. In the following snippet, specific to Windows, you can see a function where a file is opened, read from, and eventually closed. However, this has a couple of problems: in one case, the developer forgot to close the handle before leaving the function; in another case, a function that throws is called before the handle is properly closed, without the exception being caught. However, since the function throws, that cleanup code never executes.

A C++ wrapper class can ensure proper disposal of the handle when the wrapper object goes out of scope and is destroyed (whether that happens through a normal execution path or as the result of an exception). A proper implementation should account for different types of handles, with a range of values to indicate an invalid handle (such as 0/null or -1). 
