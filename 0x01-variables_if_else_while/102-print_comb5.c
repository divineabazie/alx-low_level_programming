#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int x;
	int y;

	for (x = 0; x <= 98; x++)
	{
	for (y = 0; y <= 99; y++)

	if (x <= 98)
	putchar('0' + x)
	putchar(' ');
	{
	putchar('0' + y)
	if (x <= 98 && y <= 99)
		continue

	putchar(' ');
	putchar(',');
	}
	}

	putchar('\n');

	return (0);
}
