#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Description: Prints 10 times the alphabet
 * Return: Always return 0 for success
 */
void print_alphabet_x10(void)
{
	int k;
	int w = 0;

	while (w < 10)
	{
		for (k = 97; k <= 122; k++)
		{
			_putchar(k);
		}
		w++;
	}
	_putchar('\n');
}
