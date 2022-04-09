#include <stdio.h>
/**
 *main - execution 
 *
 *Return: ends main function
 */
int main(void)
{
	char character;
	
	for (character = 'a'; character <= 'z'; character++);
	{
		putchar(character);
	}

	putchar('\n');

	return (0);
}
