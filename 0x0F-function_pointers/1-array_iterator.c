#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints each array elem on a newl
 * @array: array
 * @size: how many elem to print
 * @action: pointer to print in regular or hex
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int w;

	if (array == NULL || action == NULL)
		return;

	for (w = 0; w < size; w++)
	{
		action(array[w]);
	}
}
