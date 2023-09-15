#include "main.h"
/**
 * print_numbers - From 0-9
 *
 * return: Void
 */
void print_numbers(void)
{
	char w;

	for (w = '0'; w <= '9'; w++)
	{
		_putchar(w);
	}
	_putchar('\n');
}
