#include "main.h"
/**
 * rev_string - Function that reverses a string
 * @s: String to be reversed
 * Return: Reversed string
 */
void rev_string(char *s)
{
	int length = 0;
	int start = 0;
	char temp;
	int end = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	end = length - 1;

	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}
}
