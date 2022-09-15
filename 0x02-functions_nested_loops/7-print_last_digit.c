#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: Number whose last digit is returned
 *
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
	int l_dig;

	if (n < 0)
	{
		n = -1 * n;
	}

	l_dig = n % 10;

	_putchar(l_dig + '0');
	return (l_dig);
}
