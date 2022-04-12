include "main.h"

/**
 *print_alphabet_x10 - print alphabet
 *
 *Return: Nil result
 */
void print_alphabet_x10(void)
{

	int n;
	int k;

	k = 0;

	while (k < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}

		k++;
		_putchar('\n');

	}
}
