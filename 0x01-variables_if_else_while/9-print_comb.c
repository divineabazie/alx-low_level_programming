#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int x;

	x = 0;
	for (x = '0'; x <= '9'; ++x)
		putchar(x);

	if (x == '9')
	{
		putchar(',');
		putchar(' ');
	}

	putchar ('\n');

	return (0);


}
