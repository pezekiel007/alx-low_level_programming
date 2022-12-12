#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, c;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a, ',');
		putchar(' ');
	}

	for (b = '0'; b <= '9'; b++)
	{
		for (c = '0'; c <= '9'; c++)
		{
			putchar(b, c, ',');
			putchar(' ');
		}
	}
	return (0);
}
