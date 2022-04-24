#include "main.h"

/**
 *_strncpy - copy string.
 *@dest: string one.
 *@src: string two
 *@n: n bytes from src.
 *Return: Nil
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0, k = 0;

	while (dest[a] != '\0')
		a++;

	while (src[k] != '\0' && n > k)
	{
		dest[a] = src[k];
		k++;
		a++;
	}
	if (n > 0)
	{
		dest[a] = '\0';
	}

	return (dest);
}
