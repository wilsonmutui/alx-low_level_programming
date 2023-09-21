#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @n: Number of elemnts in the array
 * @a: Pointer to the array
 * Return: Void
 */
void reverse_array(int *a, int n)
{
	int temp, c;

	n = n - 1;
	c = 0;

	while (c <= n)
	{
		temp = a[c];
		a[c++] = a[n];
		a[n--] = temp;
	}
}
