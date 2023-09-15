#include "main.h"
/**
 * print_most_numbers - Except 2 and 4
 * Return: Void
 */
void print_most_numbers(void)
{
	char w;

	for (w = '0'; w <= '9'; w++)
	{
		if (!(w == '2' || w == '4'))
		{
			_putchar(w);
		}
	}
	_putchar('\n');
}
