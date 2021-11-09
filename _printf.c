#include "main.h"

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

	count += _putchar('%');
	count += _putchar(char_mod);
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
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			if (format[i + 1] == '%')
			{
				count += _putchar(format[i + 1]);
				i++;
			}
			else
			{
				count += get_specifier(format[++i], valist);
				i++;
			}
		}
		else
		{
			if (format[i] == '%' && format[i + 1] == '\0')
				return (-1);

			_putchar(format[i]);
			count++;
			i++;
		}
	}
	va_end(valist);
	return (count);
}
