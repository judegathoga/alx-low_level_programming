#include "main.h"

/**
 * print_number - Prints an integer.
 * @num: Integer to be printed
 *
 */
void print_number(int num)
{
	int len = 0, temp, i;
	unsigned int n = num;
	/* Make the number positive, plus 1 to take care of INT_MIN */
	if (num < 0)
	{
		n *= -1;
		_putchar('-');
	}

	temp = n;

	do {
		temp /= 10;
		len++;
	} while (temp != 0);

	while (len-- > 0)
	{
		temp = 1;

		for (i = len; i > 0; i--)
			temp *= 10;

		i = n / temp;

		_putchar(i + '0');
		n %= temp;
	}
}
