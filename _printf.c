#include <stdio.h>

int _printf(const char *format, ...)
{
	int i = 0, count = 0;

	while (format[i] != '\0')
	{
		putchar(format[i]);
		count++;
		i++;
	}

	return (count);
}
