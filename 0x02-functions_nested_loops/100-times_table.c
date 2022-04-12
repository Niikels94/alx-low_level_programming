#include "main.h"

/**
 * print_times_table - Prints the times table of the input,
 * starting with 0.
 * @n: The value of the times table to be printed.
 */
void print_times_table(int n)
{
	int nn, mm, pp;
	if (n >= 0 && n <= 15)
	{
		for (nn = 0; nn <= n; nn++)
		{
			_putchar('0');

			for (mm = 1; mm <= n; mm++)
			{
				_putchar(',');
				_putchar(' ');

				pp = nn * mm;

				if (pp <= 99)
					_putchar(' ');

				if (pp >= 100)
				{
					_putchar((pp / 100) + '0');
					_putchar(((pp / 10)) % 10 + '0');
				}
				else if (pp <= 99 && pp >= 10)
				{
					_putchar((pp / 10) + '0');
				}
				_putchar((pp % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
