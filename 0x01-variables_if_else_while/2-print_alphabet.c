#include <stdio.h>
/**
 * main - Entry point
 * Description: a program that prints alphabet in lower case
 *
 * Return: Always returns 0 for sucess
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
