#include <stdio.h>
#include "main.h"

int main(void)
{
	int len1;
	len1 = _printf("A char inside a sentence: %c. Did it work?\n", 'F');
	printf("_printf return:%i", len1);

	len1 = _printf("Should print a single percent sign: %%\n");
	printf("_printf return:%i\n", len1);

	len1 = _printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
	printf("_printf return:%i", len1);

	len1 = _printf("num: %i num: %d\n", 12, 34);

	printf("_printf return:%i\n", len1);

	len1 = _printf("num: %i num: %d\n", -1234444, 5678888);

	printf("_printf return:%i\n", len1);

	len1 = _printf("num: %i num: %d\n", INT_MAX, INT_MIN);
	printf("_printf return:%i\n", len1);
	return (0);
}
