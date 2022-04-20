#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - updates the value it points to to 98.
 * @n: an int pointer
 *
 * Return: Always 0.
 */
void reset_to_98(int *n)
{
    n = 98;
}

/**
 * main - parameters are passed by value
 *
 * Return: Always 0.
 */
int main(void)
{


    int n;
    reset_to_98(n);	
	return (0);
}
