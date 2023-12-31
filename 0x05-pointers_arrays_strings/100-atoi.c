#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function declaration for parseNumber */
int parseNumber(const char *s);

int main(void)
{
	const char *input = "12345";
	int result = parseNumber(input);

	printf("Parsed number: %d\n", result);

	return (0);
}

/* The parseNumber function definition remains unchanged. */
int parseNumber(const char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}
