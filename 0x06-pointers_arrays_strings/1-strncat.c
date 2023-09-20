#include "main.h"
/**
 * *_strncat - Appends to dest
 * @n: Number of bytes to be concancated
 * @dest: destination of the string
 * @src: source
 * Return: To destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int l, w;

	l = 0;

	while (dest[l] != '\0')
	{
		l++;
	}
	for (w = 0; w < n && src[w] != '\0'; w++, l++)
	{
		dest[l] = src[w];
	}
	dest[l] = '\0';
	return (dest);
}

