#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
		if ((ch == 'q') && (ch == 'e'))
		{
			continue
		}
	}
	putchar('\n');
	return (0);
}
