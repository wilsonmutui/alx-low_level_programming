#include "main.h"
/**
 * *_strncpy - Copies a string
 * @dest: Character
 * @src: Character
 * Return: Copied string
 * @n: Number of bytes
 */
char *_strncpy(char *dest, char *src, int n)
{
	int c = 0;

	for (c = 0; c < n && src[c] != 0; c++)
	{
		dest[c] = src[c];
	}
	for (; c < n; c++)
	{
		dest[c] = '\0';
	}
	return (dest);
}

