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


## File Descriptions

* man_3_printf - manual for \_printf.c
* main.h - header file that contains function prototypes and structure
* \_putchar.c - prints character to stdout
* \_printf.c - recieves string to print
* print_mandatory_specifiers.c - prints according to format specifier (int, decimals, characters, or strings)


## Authors

Amisaday Martínez Campos | [@ammartica](https://github.com/ammartica)

Luis Colón Santiago | [@luiscolon0426](https://github.com/luiscolon0426)




