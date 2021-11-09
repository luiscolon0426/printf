#include "main.h"


/**
 * check_valid_specifier - checks specifier and assigns corresponding function
 * @c: character to be checked
 *
 * Return: 1 if valid 0 if not
 */
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


/**
 * get_specifier - receives valid spec and assigns correct function
 * @char_mod: valid specifier
 * @valist: data to be printed
 *
 * Return: total of printed characters
 */
int get_specifier(char char_mod, va_list valist)
{
	int i = 0, count = 0;

	pt p[] = {
		{'c', print_char},
		{'s', print_str},
		{'d', print_num},
		{'i', print_num},
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


/**
 * _printf - prints anything
 * @format: string to print
 *
 * Return: total count of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0, count = 0;
	va_list valist;

	va_start(valist, format);

	if (valist == NULL || format == NULL)
		return (-1);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			while (format[i] == ' ' && format[i] != '%' && format[i] != '\0')
				i++;
			if (check_valid_specifier(format[i]))
			{
				count += get_specifier(format[i], valist);
				i++;
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
	va_end(valist);
	return (count);
}
