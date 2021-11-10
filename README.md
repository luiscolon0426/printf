# 0x11. C - printf

## Description

This is an implementation of the C function printf(). This function only prints integer numbers,
characters and strings onto the output screen.


## Returns

When successfully compiled, ```_printf()``` returns total amount of characters printed. If string is null,
the return is (null) and if an output error occurs, the function will return -1.


## Function prototype

```int _printf(const char *_*format ...);```


## Example
``` 
int main(void)
{
    _printf("Hello World!");

    return (0);
}
```
 **Expected output:** Hello World!
 
 ## Format Specifiers
 
 The previous example prints a simple string. When printing numbers, strings, or a character, format specifiers should be used:
 
 * %c - will print a character
 * %s - will print a string
 * %i - will print a number from -2,147,483,648 to 2,147,483,647
 * %d - will print a number from -2,147,483,648 to 2,147,483,647

An example using format specifiers is:

```
#include "main.h"

int main(void)
{
    _printf("This will print a character: %c\n\n", 'C');
    _printf("This will print a string: %s\n\n", "String");
    _printf("This will print a number using the i specifier: %i\n\n", 34);
    _printf("This will print a number using the d specifier: %d\n\n", 34);

    return (0);
}

```

**The expected output is:** 

This will print a character: C

This will print a string: String

This will print a number using the i specifier: 34

This will print a number using the d specifier: 34
    
## File Descriptions

* man_3_printf - manual for \_printf.c
* main.h - header file that contains function prototypes and structure
* \_putchar.c - prints character to stdout
* \_printf.c - recieves string to print
* print_mandatory_specifiers.c - prints according to format specifier (int, decimals, characters, or strings)


## Authors

Amisaday Martínez Campos | [@ammartica](https://github.com/ammartica)

Luis Colón Santiago | [@luiscolon0426](https://github.com/luiscolon0426)




