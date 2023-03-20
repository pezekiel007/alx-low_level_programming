#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - a () that searches a string for any of a set of bytes
 * @s: search the string
 * @accept: accept the search
 * Return: a ptr to d byte in s that matches 1 of d bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	char *ptr = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
				return (s);
			accept++;
		}
		accept = ptr;
		s++;
	}
	return (NULL);
}
