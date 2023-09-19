#include "main.h"
/**
 * _puts - Print string to stdout
 * @str: To be printed
 * Return: Returns string
 */
void _puts(char *str)
{
	int w = 0;

	while (str[w])
	{
		_putchar(str[w]);
		w++;
	}
	_putchar('\n');
}
