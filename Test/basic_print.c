#include <limits.h>
#include <stdio.h>
#include "main.h"



int _printf(const char *format, ...);
{
	int i = 0, count = 0;




/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
	unsigned int ui;
	void *addr;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");

	return (0);
}
