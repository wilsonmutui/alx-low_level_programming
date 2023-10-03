#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - returns pointer to a newly allocated space
 * @str: the string to be duplicated
 * Description: string to be duplicated
 * Return: nothing
 */
char *_strdup(char *str)
{
	char *www;
	int q, m = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	q = 0;
	while (str[q] != '\0')
	{
		q++;
	}
	www = malloc(sizeof(char) * (q + 1));
	if (www == NULL)
	{
		return (NULL);
	}
	for (m = 0; str[m]; m++)
	{
		www[m] = str[m];
	}
	return (www);
}
