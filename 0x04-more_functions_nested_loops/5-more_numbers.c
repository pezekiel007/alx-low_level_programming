#include "main.h"

/**
 * more_numbers - A function that prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int i;
	int j = 0;

	for (i = 0; i < 15; i++)
	{
		while (j < 15)
		{
			_putchar('1');
			_putchar(j % 10 + '0');
			j++;
		}

		_putchar('\n');
	}
}
