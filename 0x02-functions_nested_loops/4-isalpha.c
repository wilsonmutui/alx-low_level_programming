#include "main.h"
/**
 * _isalpha - Entry point
 * Description: Returns a value if the character is aphabet
 * @c: Character to be checked
 * Return: Retuns 0 and 1 depending of character
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 97))
	{
		return (1);
	}
	return (0);
}
