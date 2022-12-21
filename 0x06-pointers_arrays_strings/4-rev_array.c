#include "main.h"

/**
 * reverse_array - A function that reverse an array.
 * @a: An input array
 * @n: Number of elements of array
 *
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int aux;

	while (i < n--)
	{
		aux = a[i];
		a[i++] = a[n];
		a[n] = aux;
	}
}
