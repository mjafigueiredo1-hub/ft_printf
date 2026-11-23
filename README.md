*This project has been created as part of the 42 curriculum by mde-alme*

# ft_printf

## Description

The goal of the ft_printf project is to reimplement the *printf()* function from the C standard library (libc), by building a library that handles formatted output to *stdout*.
The implemented function, *ft_printf*, does not include the buffer management of the original *printf* (it writes characters one by one) and supports the following conversions:

| Specifier | Description |
| :--- | :--- |
| `%c` | Prints a single character |
| `%s` | Prints a string |
| `%p` | Prints a `void *` pointer address in hexadecimal (`0x...`) |
| `%d` | Prints a signed decimal (base 10) integer |
| `%i` | Prints an integer in base 10 |
| `%u` | Prints an unsigned decimal (base 10) integer |
| `%x` | Prints a number in hexadecimal (base 16), lowercase |
| `%X` | Prints a number in hexadecimal (base 16), uppercase |
| `%%` | Prints a `%` sign |

## Instructions

To compile the libftprintf library and generate the archive (`.a` file), use the provided Makefile:

- Compile the library: `make`

- Clean object files (`.o`): `make clean`

- Clean object file and `libftprintf.a`: `make fclean`

- Recompile from scratch: `make re`

To use the libft library in a C project:

- Include the header file in the project source file (`.c`): `#include "ft_printf.h"`

- Compile the project together with `libftprintf.a`:
`cc project_source.c libftprintf.a -o project_program`

## Algorithm and Data Structure

The *ft_printf* itereates the format string and writes the characters (one by one) to *stdout*, unless the character indicates the presence of a format specifier (`%`). In that case, *ft_printf* uses *ft_print_arg* to handle the format conversion (according to the specific format specifier) and write the resulting characters to *stdout* (also one by one).

In both functions, the number of bytes written to *stdout* is tracked and accumulated through the format string iteration and conversion(s). This is the return value of *ft_printf* (and *printf*).

### Conversions Handling & Printing

**`%c`, `%s`, `%%` handling**

Directly writes the corresponding character(s) to *stdout*.

For `%s` the `NULL` pointer is handled by printing *(null)*.


**`%d`, `%i`, `%u` handling**

The conversion is done by recursion using the base length (10) and conversion to corresponding character in ASCII table to access and print the digits one by one from left to right.

For `%d` and `%i` the received `int` argument is cast to `long` to prevent `int` overflow in case of `INT_MIN`.


**`%p`, `%x`, `%X` handling**

The conversion is done by recursion using the base length (16) and conversion to corresponding character in ASCII table to access and print the digits one by one from left to right.

For `%p` the `NULL` pointer is handled by printing *(nil)*. The hexadecimal conversion in preceeded by writing the `0x` prefix. The received pointer is cast to `uintptr_t` for a safe numeric representation of an address.

## Resources
Resources for this project included:

- `man` pages

- https://www.geeksforgeeks.org/

- 42 ft_printf Subject

### AI Usage
AI was used for:

- Original *printf* function capabilities clarification

- Variadic functions related concepts clarification

- Testing and validating developed functions 