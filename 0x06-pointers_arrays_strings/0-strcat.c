#include "main.h"
/**
 * _strcat - Appends the src string to the dest string
 * @dest: String
 * @src: string
 * Return: Returns pointer to dest string
 */
char *_strcat(char *dest, char *src)
{
	int l, w;

	l = 0;

	while (dest[l] != '\0')
	{
		l++;
	}
	for (w = 0; src[w] != '\0'; w++, l++)
	{
		dest[l] = src[w];
	}
	dest[l] = '\0';
	return (dest);
}
