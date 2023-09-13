#include "main.h"
/**
 * print_last_digit - Printing last digit
 * @r: Number to be inititalized
 * Return: Return the last number
 */
int print_last_digit(int r)
{
	int w;

	w = r % 10;
	if (w < 0)
	{
		w = w * -1;
	}
	_putchar(w + '0');
	return (w);
}
