#include "main.h"

/**
 * _atoi - convert a string into an int
 *
 * @s: the string to print.
 *
 * Return: Nil
 */

int _atoi(char *s)
{
	int k = 1, a = 0;
	unsigned int res = 0;

	while (!(s[a] <= '9' && s[a] >= '0') && s[a] != '\0')
	{
		if (s[a] == '-')
			k *= -1;
		a++;
	}
	while (s[a] <= '9' && (s[a] >= '0' && s[a] != '\0'))
	{
		b = (b * 10) + (s[a] - '0');
		a++;
	}
	b *= k;
	return (b);
}


