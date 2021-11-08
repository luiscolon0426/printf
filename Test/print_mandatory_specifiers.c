#include "main.h"

int print_char(va_list c)
{
	_putchar(c);
	return (1);
}

int print_str(va_list s)
{
	int i = 0;
	char *s = va_arg(s, char *);

	if (s == NULL)
		s == "(null)";

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}

//under construction
int print_decimal(va_list d)
{
	int count;
	int d = va_arg(d, int);

	//I found this on the internet
	int digit;
	digit = d % 10;
	digit = digit + '0';
	d = d / 10;
	putchar(d);
}
