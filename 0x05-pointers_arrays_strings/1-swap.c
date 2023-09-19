#include "main.h"
/**
 * swap_int - swaps two integers
 * @a: Frst integer to be swapped
 * @b: Second integer to be swapped
 * return: 0
 */
void swap_int(int *a, int *b)
{
	int swapping;

	swapping = *a;
	*a = *b;
	*b = swapping;
}
