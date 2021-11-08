#include "main.h"

int check_valid_specifier(char c)
{
	int i = 0;
	char a[] = {'c', 's', 'd', 'i', '\0'};

	while (a[i])
	{
		if (c == a[i])
			return (1);
		i++;
	}
	return (0);
}


int get_specifier(char char_mod, va_list valist)
{
	int i = 0, count = 0;

	pt p[] = {
		{'c', print_char},
		{'s', print_str},
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
			if (check_valid_specifier(format[i + 1]))
			{
				count += get_specifier(format[i + 1], valist);
				i += 2;
			}
			else
			{
				_putchar(format[i]);
				count++;
				i++;
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
			i++;
		}
	}
	return (count);
}

