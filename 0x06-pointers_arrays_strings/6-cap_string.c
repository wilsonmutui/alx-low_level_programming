#include "main.h"
/**
 * cap_string - Capitalizes all words of a string
 * @str: String to be capitalized
 * Return: Pointer to the modified string.
 */
char *cap_string(char *)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 || (str[i - 1] == ' ' ||
					str[i - 1] == '\t' || str[i - 1] == '\n' ||
					str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' ||
					str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' ||
					str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' ||
					str[i - 1] == '}'))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= ('a' - 'A');
			}
		}
		return (str);
	}
}
