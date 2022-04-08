#include <stdio.h>
/**
 *main - execution 
 *
 *Return: ends main function
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++);
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}
