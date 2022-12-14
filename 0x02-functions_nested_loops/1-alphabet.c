#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void);
{
	int alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet += 1
	}
	_putchar('\n');
	return (10);
}

int main(void)
{
	print_alphabet();
	return (0);
}
