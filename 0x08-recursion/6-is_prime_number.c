#include "main.h"
int prime(int n, int w);
/**
 * is_prime_number - says if it a prime number
 * @n: number to evaluate
 * Return: 1 if prime 0 if even
 */
int is_prime_number(int n)
{
	if (n <= 0)
	{
		return (0);
	}
	return (prime(n, n - 1));
}
/**
 * prime - Entryh point
 * @n: number tp be evaluated
 * @w: iterator
 * Return: 1 if prime 0 if even
 */
int prime(int n, int w)
{
	if (w == 1)
	{
		return (1);
	}
	if (n % w == 0 && w <= 0)
	{
		return (0);
	}
	return (prime(n, w - 1));
}
