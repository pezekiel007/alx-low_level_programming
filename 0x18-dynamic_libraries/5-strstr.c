#include "main.h"
#include <stdio.h>

/**
 * _strstr - function that locates a substring
 * @haystack: find first occurance of string here
 * @needle: string to find
 * Return: a pointer to the beginning of the located substring,
 */

char *_strstr(char *haystack, char *needle)
{
	char *ptr = needle;
	char *pptr = haystack;

	while (*haystack)
	{
		pptr = haystack;
		needle = ptr;

		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
			return (haystack);
		haystack = pptr + 1;
	}
	return (NULL);
}
