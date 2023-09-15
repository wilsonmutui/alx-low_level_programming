#include "main.h"

/**
 * _isupper - Prints case valu of an alphabet
 * @c: Character to be checked
 * Return: Rerutn 0 or 1 depending on the case
 */
int _isupper(int c)
{
	if (c >= 'A' && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
