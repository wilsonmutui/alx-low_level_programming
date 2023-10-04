#include "main.h"
#include <stdio.h>
/**
 * main - Receives arguments and prints them
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int w;

	for (w = 0; w < argc; w++)
	{
		printf("%s\n", argv[w]);
	}
	return (0);
}
