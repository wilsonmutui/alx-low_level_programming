#include "main.h"
/**
 * print_sign - Entry point
 * Description: Prints sign of the letter
 * Return: Return the sign
 * @n: Initialised charactr
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(48);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
