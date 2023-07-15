#include <stdio.h>

/**
 * main - Prints decimal numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d = 0;

	while (d <= 9)
	{
		putchar(d + '0');
		d++;
	}

	putchar('\n');
	return (0);
}
