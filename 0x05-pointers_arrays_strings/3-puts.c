#include "main.h"

/**
 * _puts - prints a string.
 *
 *@str: the string to print.
 *
 */

void _puts(char *str)
{
	int k;

	for (k = 0; str[k] != '\0'; k++)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}
