#include "main.h"
/**
 * _atoi - Converts  string to an integer
 * @s: Character input string
 * Return: The integer of the string
 */
int _atoi(char *s)
{
	int si = 1;
	int r = 0;
	int i = 0;

	while (s[i] != '0')
	{
		if (s[i] == '-')
		{
			si *= -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			r = r * 10 + (s[i] - '0');
		}
		else if (r != 0)
		{
			break;
		}
		i++;
	}
	return r * si;
}
