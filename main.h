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
{
  char *t;
  void (*f)(va_list);
} pt; /*@pt: print type*/


int _printf(const char *format, ...);
int printchar(va_list);
int printdecimal(va_list);
int printstr(va_list);
int printint(va_list);
int get_specifier(va_list);



#endif /* MAIN_H */
