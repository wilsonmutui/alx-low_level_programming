#include <stdio.h>
/**
 * main - entry point
 * Descriptio: base numbers
 * Return: Always return 0 for success
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
