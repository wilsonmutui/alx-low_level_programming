#include <stdio.h>
/**
 * main - Entry point
 * Description: Excluding printing of numbers
 *
 * Return: always retun 0 for success
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 101 || n == 113)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
