#include <stdio.h>
/**
* main - print alphabets 1in reverse
* Return: Always 0
*/
int main(void)
{
	char le;

	for (le = 'z'; le >= 'a'; le--)
		putchar(le);

	putchar('\n');

	return (0);
}
