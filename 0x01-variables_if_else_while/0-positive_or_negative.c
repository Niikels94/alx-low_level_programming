#include <stdio.h>
/**
 *main - execution and termination of program
 *
 *Return: ends main function
 */
int main(void)
{
	int n
	printf("Enter a random number:");
	scanf("%d", &n);
	if (n > 0) {
		printf("is positive!\n");
	}
	else if (n == 0) {
		printf("is zero\n");
	}
	else {
		print("is negative\n");
	}
	return (0);
}
