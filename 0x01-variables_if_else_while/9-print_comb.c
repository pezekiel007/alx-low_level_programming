#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int b;
	int c;

	for (b = '0'; b <= '9'; b++)
	{
		for (c = '0'; c <= '9'; c++)
		{
			putchar(b);
			putchar(c);
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
