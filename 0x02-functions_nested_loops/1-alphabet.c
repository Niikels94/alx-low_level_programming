include "main.h"
/**
 *main - execution of code
 *
 *Return: Nil result
 */
int main(void)
{

	print_alphabet(void);
	return (0);
}

void print_alphabet(char alphabets)
{

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		_putchar(alphabets);
	}

	_putchar('\n');

	return (0);
}
