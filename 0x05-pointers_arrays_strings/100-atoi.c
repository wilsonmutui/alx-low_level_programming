#include "main.h"
/**
 * _atoi - Converts  string to an integer
 * @s: Character input string
 * Return: The integer of the string
 */
int _atoi(char *s)
{
	int s = 1;
	int r = 0;
	int i = 0;

	while (s[i] == ' ')
	{
		i++;
	}

	if (s[i] == '-')
	{
		s = -1;
		i++;
	}
	else if (s[i] == '+')
	{
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		if (r > (INT_MAX - (s[i] - '0')) / 10)
		{
			return (sign == 1) ? INT_MAX : INT_MIN;
		}
		r = r * 10 + (s[i] - '0');
		i++;
	}
	return r * sign;
}
