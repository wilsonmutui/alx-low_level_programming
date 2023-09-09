#include <stdio.h>
/**
 * main - Entry point
 * Description: Reversed
 *
 * Return: Always return 0 for success
 */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
