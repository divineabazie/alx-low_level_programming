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

	if (x < '9')
	{
		putchar(',');
		putchar('\n');
		putchar(x);
	}

	return (0);


}
