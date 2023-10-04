#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * @argv: array of argumets
 * @argc: number of argumets
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
