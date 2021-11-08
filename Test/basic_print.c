#include "main.h"

int get_specifier(char char_mod, va_list valist)
{
	int i = 0, count = 0;

	pt p[] = {
		{'c', print_char},
		{'s', print_str},
//		{'d', print_decimal},
//		{'i', print_int},
		{'\0', NULL}
	};

	while (p[i].t != '\0')
	{
		if (p[i].t == char_mod)
		{
			count += p[i].f(valist);
			return (count);
		}
		i++;
	}
	return (count);
}


int _printf(const char *format, ...)
{
	int i = 0, count = 0;
	va_list valist;

	va_start(valist, format);


	if (format == NULL)
		return (0);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			count += get_specifier(format[i + 1], valist);
			return (count);
		}
		_putchar(format[i]);
		count++;
		i++;
	}
	return (count);
}



/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len, len2;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");

	printf("This is len: %d and this is len2 %d\n", len, len2);

	len = _printf("print char %c\n", 'l');
	len2 = printf("print char %c\n", 'l');

	printf("This is len: %d and this is len2 %d\n", len, len2);
	
	len = _printf("print string %s\n", "heeey");
	len2 = printf("print string %s\n", "heeey");

	printf("This is len: %d and this is len2 %d\n", len, len2);
	return (0);
}
