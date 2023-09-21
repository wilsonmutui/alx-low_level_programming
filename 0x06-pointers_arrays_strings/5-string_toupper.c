#include "main.h"
/**
 * *string_toupper - changes all lowercase letters of a string to uppercase.
 * @m: Pointer
 * Return: uooercase characters
 */
char *string_toupper(char *m)
{
	int l;

	l = 0;

	while (m[l] != '\0')
	{
		if (m[l] >= 97 && m[l] <= 122)
		{
			m[l] = m[l] - 32;
		}
		l++;
	}
	return (m);
}
