#include "main.h"
/**
 * _strlen - Checks length of the string
 * @s: character to be checked
 */
int _strlen(char *s)
{
	int slength = 0;

	while (s[slength])
	{
		slength++;
	}
	return (slength);
}
