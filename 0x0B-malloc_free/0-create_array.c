#include "main.h"
#include <stdlib.h>
/**
 * create_array - Creates array and assigns char c
 * @size: size of array
 * @c: charcter to be assigned
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int w;
	char *str;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
	{
		return (NULL);
	}
	for (w = 0; w < size; w++)
	{
		str[i] = c;
	}
	return (str);
}
