#include "main.h"
/**
 * print_array - Prints n elements of array
 * @a: Character integer
 * @n: Character number of elemnts
 */
void print_array(int *a, int n)
{
	int w;

	for (w = 0; w < n; w++)
	{
		printf("%d", a[w]);

		if (w < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
