#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @n: Number of elemnts in the array
 * @a: Pointer to the array
 * Return: Void
 */
void reverse_array(int *a, int n)
{
	int temp, w, q;

	for (w = 0, q = n - 1; w < q; w++, q++)
	{
		temp = a[w];
		a[w] = a[q];
		a[q] = temp;
	}
}
