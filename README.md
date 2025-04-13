# ft_printf - 42 Custom Printf

This is my standalone implementation of the `printf` function as required by the 42 cursus project `ft_printf`.

## Features

Implements the standard C `printf` behavior for the following conversion specifiers:

*   `%c` (character)
*   `%s` (string)
*   `%p` (pointer address)
*   `%d` (decimal integer)
*   `%i` (integer)
*   `%u` (unsigned decimal)
*   `%x` (lowercase hexadecimal)
*   `%X` (uppercase hexadecimal)
*   `%%` (literal %)

## Build Library

Compile the `ft_printf` library using the Makefile:

```bash
make
```

This will generate the static library file libftprintf.a.

## How to Use

Clone the repository and enter the directory:

```bash
git clone git@github.com:goncalotr/42_ft_printf.git
cd 42_ft_printf
```

Include the ft_printf.h header in your C code:

```c
#include "ft_printf.h"
```

Compile your project, linking the ft_printf library. Example:

  - If libftprintf.a is in the current directory:
  ```bash
  cc your_main.c libftprintf.a -o your_executable
  ```
  
  - If the library is in a specific path (e.g., ./ftprintf_dir/):
  ```
  cc your_main.c ./42_ft_printf/libftprintf.a -o your_executable
  ```
    
