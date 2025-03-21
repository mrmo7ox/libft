<div align="center">
  <img height="600" width="600" src="https://mo7ox.com/wp-content/uploads/2025/03/libft.png" alt="Alt text">
</div>

# Libft

Libft is a custom implementation of the C standard library functions as part of the 42 School curriculum. The library includes various functions for string manipulation, memory management, and linked list operations, among others.

## Table of Contents
- [Functions](#functions)
  - [Standard Functions](#standard-functions)
  - [Bonus Functions](#bonus-functions)
- [Compilation](#compilation)
- [Usage](#usage)
- [License](#license)

## Functions

### Standard Functions

- `ft_atoi`: Converts a string to an integer
- `ft_bzero`: Sets a block of memory to zero
- `ft_calloc`: Allocates memory and sets it to zero
- `ft_isalnum`: Checks if a character is alphanumeric
- `ft_isalpha`: Checks if a character is alphabetic
- `ft_isascii`: Checks if a character is an ASCII character
- `ft_isdigit`: Checks if a character is a digit
- `ft_isprint`: Checks if a character is printable
- `ft_itoa`: Converts an integer to a string
- `ft_memchr`: Searches for a character in a block of memory
- `ft_memcmp`: Compares two blocks of memory
- `ft_memcpy`: Copies a block of memory
- `ft_memmove`: Moves a block of memory
- `ft_memset`: Sets a block of memory to a specified value
- `ft_putchar_fd`: Writes a character to a file descriptor
- `ft_putendl_fd`: Writes a string followed by a newline to a file descriptor
- `ft_putnbr_fd`: Writes an integer to a file descriptor
- `ft_putstr_fd`: Writes a string to a file descriptor
- `ft_split`: Splits a string into an array of strings based on a delimiter
- `ft_strchr`: Finds the first occurrence of a character in a string
- `ft_strdup`: Duplicates a string
- `ft_striteri`: Applies a function to each character of a string
- `ft_strjoin`: Joins two strings into a new string
- `ft_strlcat`: Concatenates two strings with size limitation
- `ft_strlcpy`: Copies a string with size limitation
- `ft_strlen`: Returns the length of a string
- `ft_strmapi`: Creates a new string by applying a function to each character of a string
- `ft_strncmp`: Compares two strings up to a specified number of characters
- `ft_strnstr`: Finds the first occurrence of a substring in a string
- `ft_strrchr`: Finds the last occurrence of a character in a string
- `ft_strtrim`: Trims characters from the beginning and end of a string
- `ft_substr`: Creates a substring from a string
- `ft_tolower`: Converts a character to lowercase
- `ft_toupper`: Converts a character to uppercase

### Bonus Functions

- `ft_lstadd_back`: Adds a new element to the end of a list
- `ft_lstadd_front`: Adds a new element to the beginning of a list
- `ft_lstclear`: Clears a list
- `ft_lstdelone`: Deletes a single element from a list
- `ft_lstiter`: Iterates over a list and applies a function to each element
- `ft_lstlast`: Returns the last element of a list
- `ft_lstmap`: Applies a function to each element of a list and creates a new list
- `ft_lstnew`: Creates a new list element
- `ft_lstsize`: Returns the size of a list

## Compilation

To compile the library, run the following command:

```bash
make
```

This will generate the `libft.a` static library file.

To compile the bonus functions, run:

```bash
make bonus
```

## Usage

Include the `libft.h` header file in your project and link against the `libft.a` library:

```c
#include "libft.h"

// Your code here
```

Compile your project with the `libft.a` library:

```bash
cc -o my_program my_program.c -L. -lft
```

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for more details.