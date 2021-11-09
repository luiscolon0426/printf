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


 // edge cases: bregar con range de int (-2,147,483,648 a 2,147,483,647)

int print_num(va_list i)
{
	int number = 0;
	int index = 0;
	int counter = 0;
	int array[10];
	int n;
	{
		number = va_arg(i, int);
		if (number < 0)
		{
			counter += _putchar ('-');
			n = number * (-1);
		}
		else
			n = number;
		if (n == 0)
		{
			counter += _putchar(n + 0);
			return (counter);
		}
		while (n != 0)
		{
			array[index] = n % 10;
			n = n / 10;
			index++;
		}
		for (index = index - 1; index >= 0; index--)
		{
			counter += _putchar(array[index] + '0');
		}
		return (counter);
	}
}

/*under construction

int print_num(va_list i)
{
	int div = 1, count = 0, number, n;

	number = va_arg(i, int);

	if (number < 0)
	{
		count += _putchar('-');
		n = number * -1;
	}
	else
		n = number;

	while ((n / div) > 9)
		div *= 10;

	while (div >= 1)
	{
		_putchar(((n / div) % 10) + '0');
		div /= 10;
		count++;
	}
	return (count);
}
*/
