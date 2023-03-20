#include "main.h"

/**
 * _strncpy - Write a function that copies a string.
 * @dest: input string
 * @src: input string
 * @n: use bytes from src
 * Return: copies of strings
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *dest_src = dest;
	int src_len = 0;

	while (src_len < n && src[src_len])
		++src_len;

	if (src + src_len < dest || dest + n < src)
	{
		for (; src_len; --src_len, --n)
			*dest_src++ = *src++;
		for (; n; --n)
			*dest_src++ = '\0';
	}
	return (dest);
}
