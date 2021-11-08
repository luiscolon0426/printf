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

//under construction
/*int print_num(va_list i)
{
	int count;
	int d = va_arg(i, int);

	//si es negativo, print - and make it positive
	if (d < 0)
	{
		_putchar('-');
		d = -d;
	}

	//remueve el last digit y recurre to print all of them
	if (d / 10)
	{
		count += print_num(d);
	}

	//print last digit
	_putchar(d % 10 + '0');
	count++;

	return (count);
}
	I found this on the internet
	//int digit;
	digit = d % 10;
	digit = digit + '0';
	d = d / 10;
	_putchar(d);
}*/




int print_num(va_list i)
{
	int number = 0;
	int index = 0;
	int counter = 0;
	int array[20];
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
			counter += _putchar (n + 0);
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

//under construction
/*int print_num(va_list i)
{
    int count;
    int num = va_arg(i, int);

    //si es negativo, print - and make it positive
    if (num < 0)
    {
        _putchar('-');
        num = -num;
    }

    //remueve el last digit y recurre to print all of them
    if (num / 10)
        w to pas
    {
        count += print_num(num);
    }

    //print last digit
    _putchar(num % 10 + '0');
    count++;

    return (count);
}
    *I found this on the internet
    //int digit;
    digit = d % 10;
    digit = digit + '0';
    d = d / 10;
    _putchar(d);
}*/
