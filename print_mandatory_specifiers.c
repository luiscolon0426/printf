#include "main.h"


/**
 * print_char - prints characters
 * @c: character to be printed
 *
 * Return: total amount of character printed (1)
 */
int print_char(va_list c)
{
	char ch = va_arg(c, int);

	_putchar(ch);
	return (1);
}


/**
 * print_str - prints strings
 * @s: string to be printed
 *
 * Return: total amount of characters printed
 */
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


/* edge cases: bregar con range de int (-2,147,483,648 a 2,147,483,647) */
/**
 * print_num - prints negative or positive numbers
 * @i: numbers to print
 *
 * Return: total amount of characters printed
 */
int print_num(va_list i)
{
	int number = va_arg(i, int);
	int idx = 0, counter = 0;
	int array[13];
	unsigned int n;
	{
		if (number < 0)
		{
			counter += _putchar ('-');
			n = number * (-1);
		}
		else
			n = number;

		if (n == 0)
		{
			counter += _putchar(n + '0');
			return (counter);
		}

		while (n != 0)
		{
			array[idx] = n % 10;
			n /= 10;
			idx++;
		}

		for (idx -= 1; idx >= 0; idx--)
		{
			counter += _putchar(array[idx] + '0');
		}
		return (counter);
	}
}
