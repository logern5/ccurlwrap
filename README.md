# ccurlwrap
A wrapper for libcurl in C that allows easy writing to memory
## Usage
Compile ccurlwrap and include the header `CCurl.h` or `CCurl_simple.h` and link to the respective object file, or do not compile and just directly include the C files `CCurl.c` or `CCurl_simple.c`.
To use `CCurl`, you pass a CURL handle to the function `http`, and it returns a `struct MemoryStruct` that contains members `size` (size of the data in bytes) and `memory` (a char pointer of the string return data).
To use `CCurl_simple`, you do not have to do any CURL init whatsoever and simply pass a URL to it. It returns a `struct MemoryStruct` as the former.
See the code in the `examples_src` folder.
