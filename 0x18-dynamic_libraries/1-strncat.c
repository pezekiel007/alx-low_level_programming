#include "main.h"

/**
 * _strncat - Write a function that concatenates two strings
 * @dest: input string
 * @src: input string
 * @n: use bytes from src
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0, destsrc = 0;

	for (; dest[destsrc];)
		destsrc++;
	while (j < n && src[j])
	{
		dest[destsrc + i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
