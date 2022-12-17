#include "main.h"

/**
 * print_diagonal - A function that prints a diagonal line
 * on the terminal.
 * @n: A input character
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
