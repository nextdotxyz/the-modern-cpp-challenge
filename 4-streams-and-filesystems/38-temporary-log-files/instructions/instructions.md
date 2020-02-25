# Objective

Create a logging class that writes text messages to a discardable text file. The text file should have a unique name and must be located in a temporary directory. Unless specified otherwise, this log file should be deleted when the instance of the class is destroyed. However, it should be possible to retain the log file by moving it to a permanent location.

# Implementation

The logging class that you have to implement for this task should:

Have a constructor that creates a text file in a temporary directory and opens it for writing
During destruction, if the file still exists, close and delete it
Have a method that closes the file and moves it to a permanent path
Overloads `operator<<` to write a text message to the output file

In order to create unique names for the file, you could use a UUID (also known as GUID). The C++ standard does not support any functionality related to that, but there are third-party libraries, such as `boost::uuid`, `CrossGuid`, or `stduuid`. For this implementation, it is best to use the last one. You can find it at https://github.com/mariusbancila/stduuid: