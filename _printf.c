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

	len = _printf("print int [%i] [%d]\n", 123467, -123456);
	len2 = printf("print int [%i] [%d]\n", 123467, -123456);

	printf("This is len: %d and this is len2 %d\n", len, len2);

	return (0);
}
