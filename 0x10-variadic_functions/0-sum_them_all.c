#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - a function to sum all integers
 * ap:the variable argument
 * i:the itrator
 * sum:the sum of the integers
 * @n:counter
 * Return: (sum) or (0)
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum;

	va_start(ap, n);
	if (n == 0)
		return (0);
	sum = 0;
	for (i = 0; i <  n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);

}
