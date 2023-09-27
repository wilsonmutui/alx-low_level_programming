#include "main.h"
int _sqrt_recursion(int n);
/**
 * _sqrt_recursion - Gives natural square root of a number
 * @n: Number to be evaluated
 * Return: resulting square root
 *
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (squareroot(n, 0));
}
/**
 * squareroot - Recurces to find srt
 * @n: number to be evaluated
 * @w: Iterator
 * Return: Natural srt
 */
int squareroot(int n, int w)
{
	if (w * w > n)
	{
		return (-1);
	}
	if (w * w == n)
	{
		return (w);
	}
	return (squareroot(n, w + 1));
}
