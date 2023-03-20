#include "main.h"

/**
 * _isalpha - checks letter
 * @c: receipt character by main.
 * Return: 1 if c is lowercase
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
