#include "main.h"
/**
 * puts2 - Prints every character of the string
 * @str - Refenced string
 * return: 0
 */
void puts2(char *str)
{
	int w = 0;

	while (str[w] != '\0')
	{
		if (w % 2 == 0)
		{
			_putchar(str[w]);
		}
		w++;
	}
	_putchar('\n');
}
