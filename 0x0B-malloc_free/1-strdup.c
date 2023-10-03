#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - returns pointer to a newly allocated space
 * str: character
 * Return: 0
 */
char *_strdup(char *str)
{
	char *w;
	int q, m = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[q] != '\0')
	{
		q++;
	}
	w = malloc(sizeof(char) * (q + 1));
	if (w == NULL)
	{
		return (NULL);
	}
	for (m = 0; str[m]; m++)
	{
		w[m] str[m];
	}
	return (w);
}
