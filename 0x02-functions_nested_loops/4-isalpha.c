#include "main.h"
/**
* _isalpha - checks for alphanets
* @c: character to be checked
*
* Return: 1 if character isva letter, 0 otherwise
*/

int _isalpha(int c)
{
	if ((c >= 'a' and c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
