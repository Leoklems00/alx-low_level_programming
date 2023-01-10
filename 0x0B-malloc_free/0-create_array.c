#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array
 * @size: is the size of array
 * @c: is the character
 *
 * Return: null lor array
 */
char *create_array(unsigned int size, char c)
{
	char *arr = malloc(size);

	if (size == 0 || arr == 0)
		return (NULL);
	while (size--)
		arr[size] = c;
	return (arr);
}
