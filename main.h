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
int printchar(char *s, ...);
int printdecimal(char *s, ...);
int printstr(char *s, ...);
int printint(char *s, ...);




#endif /* MAIN_H */
