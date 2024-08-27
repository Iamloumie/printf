# Custom Printf Implementation

This project is a custom implementation of the printf function in C
supporting various format specifiers and additional features.

## Files

- `*printf.c`: Main printf implementation
- `*putchar.c`: Custom putchar function
- `main.c`: Main program for testing
- `main.h`: Header file with function prototypes and includes
- `buffer.c`: Buffer management for output

### Format Specifier Handlers

- `c_spec.c`: Character specifier
- `d_spec.c`: Decimal integer specifier
- `i_spec.c`: Integer specifier
- `o_spec.c`: Octal specifier
- `u_spec.c`: Unsigned integer specifier
- `x_spec.c`: Lowercase hexadecimal specifier
- `X_spec.c`: Uppercase hexadecimal specifier
- `s_spec.c`: String specifier
- `p_spec.c`: Pointer specifier
- `b_spec.c`: Binary specifier
- `r_spec.c`: Reverse string specifier
- `R_spec.c`: ROT13 string specifier

### Extended Functionality

- `long_d.c`: Long decimal integer handling
- `long_i.c`: Long integer handling
- `long_o.c`: Long octal handling
- `long_u.c`: Long unsigned integer handling
- `long_x.c`: Long lowercase hexadecimal handling
- `long_X.c`: Long uppercase hexadecimal handling
- `short_d.c`: Short decimal integer handling
- `short_i.c`: Short integer handling
- `short_o.c`: Short octal handling
- `short_u.c`: Short unsigned integer handling
- `short_x.c`: Short lowercase hexadecimal handling
- `short_X.c`: Short uppercase hexadecimal handling

### Utility Functions

- `str_len.c`: String length calculation
- `print_hex_xtra.c`: Additional hexadecimal printing functionality
- `print_HEX_xtr.c`: Additional uppercase hexadecimal printing functionality

## Compilation

To compile the project, use the following command:

gcc -Wall -Werror -Wextra -pedantic \*.c -o printf

## Usage

After compilation, run the program with:
./printf

## Features

This custom printf implementation supports the following format specifiers:

- `%c`: Character
- `%s`: String
- `%d` and `%i`: Integer
- `%u`: Unsigned integer
- `%o`: Octal
- `%x`: Lowercase hexadecimal
- `%X`: Uppercase hexadecimal
- `%p`: Pointer address
- `%b`: Binary
- `%r`: Reverse string
- `%R`: ROT13 encoded string

It also supports length modifiers for long and short integers.

## Author

Lawal Adedamola Olumide
