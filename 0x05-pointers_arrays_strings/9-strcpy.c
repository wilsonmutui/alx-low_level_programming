#include "main.h"
/**
 * *_strcpy - Coopies string
 * @dest: String type
 * @src: String type
 * Returnn: Pointer to des
 */
char *_strcpy(char *dest, char *src)
{
	int w = -1;

	do
	{
		w++;
		dest[w] = src[w];
	}
	while (src[w] != '\0');

	return (dest);
}
