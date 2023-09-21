#include "main.h"
/**
 * _strcmp - Compares two string
 * @s1: string one to be compared
 * @s2: Second string to be compared
 * Return: Comparision
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 && (*s1 == *s2)))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
