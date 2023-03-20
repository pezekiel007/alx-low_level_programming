#include "main.h"

/**
 * _strlen - write  a functioon that returns the length of a string
 * @s: input string
 * Return: 0 Always
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
