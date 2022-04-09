#include <stdio.h>
/**
 *main - execution
 *
 *Return: Nil result
 */
int main(void)
{
	int figures, mynumbers;

	for (figures = 0; figures < 10; figures++)
	{
		for (mynumbers = 0; mynumbers < 10; mynumbers++)
		{
			if (figures != mynumbers)
			{
				putchar(figures+mynumbers);
			}
		}
	}

	return (0);
}
