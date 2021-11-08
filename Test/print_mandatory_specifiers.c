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
		str == "(null)";

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}

//under construction
int print_num(va_list i)
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
