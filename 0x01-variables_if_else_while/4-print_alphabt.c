#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	if (c == 'q' || c == 'e')

		continue;

		putchar(c);
	}
	putchar ('\n');

		return (0);



}
