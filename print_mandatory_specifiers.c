#include "main.h"

int print_char(va_list c)
{
	char ch = va_arg(c, int);
	_putchar(ch);
	return (1);
}

int print_str(va_list s)
{
	int i = 0;
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(null)";

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
