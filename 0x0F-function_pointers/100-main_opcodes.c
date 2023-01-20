#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * main - a program that prints the opcodes of its own main function.
 * @argc: argument count
 * @argv: argument value
 * Return: 1 or 2 if fail, 0 if successful
 */
int main(int argc, char **argv)
{
	int num, i;
	unsigned char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("Error\n");
		exit(2);
	}
	ptr = (unsigned char *)main;
	i = 0;
	if (num > 0)
	{
		while (i < (num - 1))
			printf("%02hhx ", ptr[i++]);
		printf("%02hhx\n", ptr[i]);
	}
	return (0);
}
