#include <stdio.h>

/**
 * main - Prints alphabets in reverse order
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i = 'z';

	while (i >= 'a')
	{
		putchar(i);
		i--;
	}

	putchar('\n');
	return (0);
}
