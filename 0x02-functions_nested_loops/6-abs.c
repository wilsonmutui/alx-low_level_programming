#include "main.h"
/**
 * _abs - Prints the absolute value
 * @d: Intitialised character
 * Return: Returns the absolute number
 */
int _abs(int d)
{
	if (d < 0)
	{
		int av;

		av = d * -1;
		return (av);
	}
	return (d);
}
	
