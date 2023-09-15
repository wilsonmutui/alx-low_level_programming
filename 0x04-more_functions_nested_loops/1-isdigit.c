#include "main.h"
 /**
  * int _isdigit - Checks for numbers between 0-9
  * @c: Character to be checked
  * Return: Returns 0 and 1
  */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
