#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char alpha;
	int n = 0;

	while (n <= 10)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');

		n++;
	}
}
