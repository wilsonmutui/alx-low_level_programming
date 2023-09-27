#include "main.h"
/**
 * _strlen_recursion - Entry point
 * Return: Length of the string
 * @s: string to be printed
 *
 */
int _strlen_recursion(char *s)
{
	int l = 0;

	if (s)
	{
		l++;
		l += _strlen_recursion(s + 1);
	}
	return (l);
}
