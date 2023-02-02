#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index.
 * @index: the index, starting from 0 of the bit you want to get.
 * @n: number to search.
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
