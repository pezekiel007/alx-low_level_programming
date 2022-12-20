#include "main.h"

/**
 * swap_int - A function that swaps the value
 * of two integers
 * @a: First character to print
 * @b: Second character to print
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
