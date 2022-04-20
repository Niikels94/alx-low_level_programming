#include "main.h"

/**
 * swap - interchanges two int
 * @a: an integer
 * @b: another integer
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b);
{
	int swap;
	
	swap = 0;
	swap = *a;
	*a = *b;
	*b = swap;
}
