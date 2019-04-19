### Objective

Write a function that, given a string that represents a URL, parses and extracts the parts of the URL (`protocol`, `domain`, `port`, `path`, `query`, and `fragment`).

### Implementation

This problem is also suited to being solved using regular expressions. Finding a regular expression that could match any URL is, however, a difficult task. The purpose of this exercise is to help you practice your skills with the regex library, and not to find the ultimate regular expression for this particular purpose. 

For this task we will consider that a URL has the following parts: `protocol` and `domain` are mandatory, and `port`, `path`, `query`, and `fragment` are all optional. The following structure is used to return results from parsing an URL (alternatively, you could return a tuple and use structured binding to bind variables to the various sub parts of the tuple).

A function that can parse a URL and extract and return its parts could have the following implementation. Note that the return type is an `std::optional<uri_parts>` because the function might fail in matching the input string to the regular expression; in this case, the return value is `std::nullopt`.