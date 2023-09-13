#include "main.h"
/**
 * _islower - Entry point
 * Description: Returns a value if the character
 * @c: Character to be checked
 * Return: Retuns 0 and 1 depending of character
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
