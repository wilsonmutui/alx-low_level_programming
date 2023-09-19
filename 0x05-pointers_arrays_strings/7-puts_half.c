#include "main.h"
/**
 * puts_half - Prints half the characters
 * @str: Character string
 */
void puts_half(char *str)
{
	int l = 0;
	int s = 0;

	while (str[l] != '\0')
	{
		l++;
	}

	s = (l + 1) / 2;

	while (str[s] != '\0')
	{
		_putchar(str[s]);
		s++;
	}
	_putchar('\n');
}
