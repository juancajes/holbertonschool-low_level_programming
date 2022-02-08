#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - print the variable
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("Last digit of ");
	if (n % 10 > 5)
	{
		printf("%d is %d  and is greater than 5\n", n, n % 10);
	}
	if (n % 10 == 0)
	{
		printf("%d is %d  and 0\n", n, n % 10);
	}
	if (n % 10 < 6)
	{
		printf("%d is %d  and is less than 6\n", n, n % 10);
	}


	return (0);
}
