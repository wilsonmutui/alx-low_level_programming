#include <stdio.h>
/**
 * main - Entry point
 * description: A program that prints alphabets
 * in lower case and uppercase using putchar
 *
 * Return: Always returns zero for sucess
 */
int main(void)
{
	int n = 97;
	int d = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (d <= 90)
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);
}
