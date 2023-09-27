#include "main.h"
/**
 * _pow_recursion - Gives value of x raised to pow of y
 * @x: value to raise
 * @y: Power
 *
 * Return: Result of power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
