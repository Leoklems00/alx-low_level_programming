#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - to print all the numbers provided
 * ap: the variable arguments
 * i: iterator
 * @seperator: a character to seperate the numbers
 * @n: counter
 *
 * Return: nothing
*/
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (n != 0)
	{
		va_start(ap, n);
		if (seperator == NULL)
			return;
		for (i = 0; i < n-1; i++)
		{
			printf("%d", va_arg(ap, int));
			if (i != n - 1)
				printf("%c ", *seperator);
		}
	va_end(ap);
	}
}
