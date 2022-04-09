#include <stdio.h>
/**
 *main - execution
 *
 *Return: Nil result
 */
int main(void)
{
	int figures;
	int mynum;

	for (figures = '0'; figures < '9'; figures++)
	{
		for (mynum = figures + 1; mynum < 10; mynum++)
		{
			putchar((figures % 10) + '0');
			putchar((mynum % 10) + '0');
			if (figures == 8 && mynum == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
