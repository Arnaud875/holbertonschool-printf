## Printf project

**Description**

The holbertonschool-printf project is an educational implementation of the printf function in C, created as part of the Holberton School curriculum. This project aims to replicate the functionality of the standard printf function, providing a deep dive into format specifiers, argument handling, and custom output formatting.
## Created with 

* vs code
* C language 
## Features

- **Supported Format Specifiers:**
  - `%c`: Prints a single character.
  - `%s`: Prints a string.
  - `%d` and `%i`: Print integers.
  - `%b`: Prints the binary representation of an unsigned integer.
  - `%%`: Prints a percent sign.

## Usage/Examples

**Usage**

To use the custom `_printf` function, include the `main.h` header file in your program and compile the source files.

**Example**

c

        #include "main.h"

        int main(void)
    {
    _printf("Character: %c\n", 'H');
    _printf("String: %s\n", "Hello, World!");
    _printf("Integer: %d\n", 123);
    _printf("Binary: %b\n", 98);
    _printf("Percent: %%\n");

    return 0;
    }

    stdout: Character: H

    stdout: String: Hello, World !

    stdout: Integer: 123

    stdout: Binary: 1100010

    stdout: Percent: %
## Compilation
*       gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
##  Files

-*main.h*: Header file containing function prototypes and type definitions.

-*_printf.c*: Contains the main _printf function and its helpers.

-*print_char.c*: Contains the function to print a character.

-*print_string.c*: Contains the function to print a string.

-*print_integer.c*: Contains the functions to print integers.

-*print_binary.c*: Contains the function to print an unsigned integer in binary.


## Function Descriptions

 _printf: *Formats and prints data to the standard output.*

    int _printf(const char *format, ...);

print_char: *Prints a single character.*

    int print_char(va_list arguments);


print_string: *Prints a string.*

    int print_string(va_list arguments);

print_integer: *Prints an integer.*

    int print_integer(va_list arguments);

print_binary: *Prints the binary representation of an unsigned integer.*

    int print_binary(va_list arguments);





## Struct Definition

PrintType_t: *Structure to map format specifiers to their corresponding print functions.*

    typedef struct PrintType
    {
    char *type;
    int (*print_type_function)(va_list args);
    } PrintType_t;

## Contributing

1. Create the repository

2. Create a new branch: 

    -git checkout -b Arnaud

    -git checkout -b Ema

3. Make your changes and commit them: git commit

4. Push to the branch: git push origin/main

5. Open a pull request.
## Authors

- [@Arnaud875](https://www.github.com/Arnaud875)

- [@Duupain](https://www.github.com/Duupain)
