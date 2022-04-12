#include "main.h"
/**
 * times_table -prints tables
 *
 * Return: Nil result
 */
void times_table(void)
{
	int k;
	int l;
	int c;

	for (k = 0; k <= 9; k++)
	{
		for (l = 0; l <= 9; l++)
		{
			c = k * l;
			if ((c / 10) == 0)
			{
				if (l == 0)
				{
					_putchar ('0');
				}
				if (l != 0)
				{
					_putchar (' ');
					_putchar ((c % 10) + '0');
				}
				if (l < 9)
				{
					_putchar(',');
					_putchar (' ');
				}
			}
			else
			{
				_putchar ((c / 10) + '0');
				_putchar ((c % 10) + '0');

				if (l < 9)
				{

				_putchar(',');
				_putchar (' ');
				}
			}
		}
		_putchar ('\n');
	}
}
