#include "main.h"

/**
 * _puts - write a function that prints a string
 * @str: string input
 * Return: 0 Always
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
