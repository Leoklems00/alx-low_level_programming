#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - to print all the strings provided
 * ap: the variable arguments
 * i: iterator
 * @seperator: a character to seperate the numbers
 * @n: counter
 *
 * Return: nothing
*/

void print_strings(const char *seperator, const unsigned  int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	if (seperator == NULL)
		return;
	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(ap, int));
		if (i != n - 1)
			printf("%c ", *seperator);
	}
	va_end(ap);
}
