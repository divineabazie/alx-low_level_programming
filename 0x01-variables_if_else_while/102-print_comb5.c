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
	int n;
	int m;

	for (x = 0; x <= 9; ++y)
	{
	for (y = 0; y <= 8; ++y)
	{
	for (n = 0; n <= 9; ++n)
	{
	for (m = 0; m <= 9; ++m)

	if (x < y && y < n && n < m)
	{
	putchar('0' + x);
	putchar('0' + y);
	putchar('0' + n);
	putchar('0' + m);
	if (x != 9 || y != 8 || n != 9 || m != 9)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	}
	putchar('\n');

	return (0);

}
