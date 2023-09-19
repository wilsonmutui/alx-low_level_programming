#include "main.h"
/**
 * print_rev - Prints a string in reverse
 * @S - String to be checked
 * Return: Reversed string
 */
void print_rev(char *s)
{
	int rev = 0;

	while (s[rev])
		rev++;
	while (rev--)
		_putchar(s[rev]);
	_putchar('\n');
}
