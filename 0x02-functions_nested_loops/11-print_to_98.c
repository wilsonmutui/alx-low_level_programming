#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Print natural number
 * @w: Starting interger
 * Return: Always 0 for succes
 */
void print_to_98(int w)
{
	if (w <= 98)
	{
		for (; w <= 98; w++)
		{
			if (w == 98)
			{
				printf("%d", w);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", w);
			}
		}
	else
	{
		for (; w >= 98; w--)
		{
			if (w == 98)
			{
				printf("%d", w);
				printf("\n");
				break;
			}
		}
	}
}
