#include "main.h"
/**
 * print_alphabet -  Prints characters in lowercase
 *
 * Description: Putchar fuction to print lowercase
 * Return: Void
 */
void print_alphabet(void)
{
	int k;

	for (k = 97; k <= 122; k++)
	{
		_putchar(k);
	}
	_putchar('\n');
}
