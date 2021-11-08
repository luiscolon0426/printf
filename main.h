#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>

/**
 * struct print - choose corresponding print function
 * @t: data type
 * @f: print function type belongs to
 */
typedef struct print
{
	char t;
	int (*f)(va_list);
} pt;


int _printf(const char *format, ...);

int print_char(va_list c);

int print_decimal(va_list d);

int print_str(va_list s);

int print_int(va_list i);

int get_specifier(va_list);


#endif /* MAIN_H */
