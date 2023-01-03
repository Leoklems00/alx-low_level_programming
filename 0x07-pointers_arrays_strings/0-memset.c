#include "main.h"
/**
 * _memset - fill stuff
 * @s: starting address
 * @b: desired value
 * @n: number of bytes to change
 *
 * Return: changed array
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
