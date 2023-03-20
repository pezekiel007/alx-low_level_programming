#include "main.h"

/**
 * _strcat - Write a function that concatenates two strings.
 * @dest: input string
 * @src: input string
 * Return: Returns a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *destsrc = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (destsrc);
}
