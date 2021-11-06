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
