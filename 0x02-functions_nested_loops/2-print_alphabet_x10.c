include "main.h"

/**
 *print_alphabet_x10 - print alphabet
 *
 *Return: Nil result
 */
void print_alphabet_x10(void)
{
	char alphabet;
	int count;

	while (count < 10)
	{
		for (alphabet = 'a' ; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}

		_putchar('\n');

		count++;
	}

}
