#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * description: Assign a random number to a variable n
 *
 * Return: Always return 0 for success
 */
int main(void)
{
	int n;
	int fn;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	fn = n % 10;
	if (fn > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, fn);
	}
	else if (fn == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, fn);
	}
	else
	{
		printf("Last digit of %d is %d and less than 6 and not 0\n", n, fn);
	}
	return (0);
}
