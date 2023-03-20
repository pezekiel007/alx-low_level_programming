#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 * @s: fill memory location
 * @b: filling char
 * @n: number of bytes required
 * Return: Returns a pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (ptr);
}
