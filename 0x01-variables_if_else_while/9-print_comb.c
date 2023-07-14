#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of single-digit numbers
 * separated by a comma and space. Numbers are printed in ascending order.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	putchar('0'); /* Print the first digit */

	/* Print the remaining digits using a loop */
	for (i = 1; i < 10; i++)
	{
		putchar(','); /* Print the separator */
		putchar(' '); /* Print a space */
		putchar(i + '0'); /* Print the current digit */
	}

	putchar('\n'); /* Print a new line */

	return (0);
}
