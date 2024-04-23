#include <stdio.h>
#include <stdlib.h>

/**
 * main -  a program that prints the opcodes of its own main function.
 * @argc: the number of arguments in the program
 * @argv: an array of pointers to the arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
	int b, i;
	int (*address)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)


