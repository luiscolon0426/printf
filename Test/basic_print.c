#include <main.h>

int (*get_specifier(const char format))(va_list)
{
	int i = 0;

	pt p[] = {
		{"c", print_char},
		{"s", print_str},
		{"d", print_decimal},
		{"i", print_int},
		{NULL, NULL}
	};

	while (p[i].t != '\0')
	{
		if (p[i].t == format)
			break;

		i++;
	}
	return (p[i].f);
}


int _printf(const char *format, ...)
{
	int i = 0, count = 0;
	int (*f)(va_list);
	va_list valist;

	va_start(valist, format);



	//si el string llegó vacio, end the program and return 0
	if (format == '\0')
		return (0);



	//print string cuando no tiene data specifiers
	while (format[i] != '\0' && format[i] != '%')
	{
		_putchar(format[i]);
		count++;
		i++;
	}
	//si string no tenia data specifiers, ya lo imprimí en el ciclo anterior, asi que acaba mi programa y
	//devuelve el total of chars printed
	if (!format[i])
		return (count);



	//si el character en mi string es un %, busca a cuál data type pertenece el char que le sigue a %
	if (format[i] == %)
	{
		f = get_specifier(format[i + 1]);



	return (count);
}



/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");

	printf("This is len: %d and this is len2 %d\n", len, len2);

	return (0);
}
