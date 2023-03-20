#include "main.h"

/**
 * _memcpy - Write a function that copies memory area.
 * @dest: paste memory
 * @src: copy memory
 * @n: memory bytes
 * Return: Returns a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (ptr);
}
